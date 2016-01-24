#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>
#include <fstream>
#include <ostream>

using namespace std;

int main()
{
	cout << "Enter name of file to search:" << endl; //Reading in File Name
	string filename;
	cin >> filename;

	ifstream txt(filename.c_str()); //Creating Reader

	if(!txt) //Check to see if file has been opened succesfully
	{
		cout << "Error: unable to read file."<< endl;
		return 1;
	}

	cout << "Select and 'n' for the babbler to use: " << endl;
	int n; // "n" for the nbabler
	cin >> n;

	vector<string> text; //set up the input vector, output, and word holder
	vector<string> output (100);
	string word;	
	int OutputLocation = 0; // keeps track of where we are in output vector

	while(txt >> word) //read the book into the input vector
		text.push_back(word);

	txt.close();

	int NumWords = (int) text.size(); //Number of words in text
	srand ( time(NULL) ); //Initalize random # seed
	int start = rand () % NumWords; //Random location to start n-gram
	bool MatchFound = false; //keeps track if a word has been added yet
	bool BabblerMatch = true; //keeps track if n-1 values have matched
							  //and the word can be added to the babble.

	for(int i = 0; i != n; i++) //inserts the first n-gram
	{
		output.at(OutputLocation) = text.at(start + i);
		OutputLocation++;
	}

	while(OutputLocation<100) //fills the rest of the output vector
	{
		int place = rand () % (NumWords-1) + (n-1); //random start location

		for(int i = place; i < NumWords; i++) //Itterates through text starting at random "place"
		{
			BabblerMatch = true;
			if(!MatchFound) //Ensures we haven't already inserted a word for this
			{				// random value of "place"

				/*For each spont in "text" we check if the n-1 values before it check
				the n-1 values before "OutputLocation" in "output".*/
				for(int j = n-1 ; j > 0; j--) 
				{ 											
					if(output.at(OutputLocation-j) != text.at(i-j))
					{
						BabblerMatch = false;
					}
				}
				if(BabblerMatch) //In case that n-1 words match, add word at next slot
				{
					output.at(OutputLocation) = text.at(i);
					MatchFound = true;
				}
			}
		}

		if(!MatchFound)
		{
			/*Start @ n-1 so we don't go out of range and itterates through text up to
			"place". Rest is same as above, and just checks any text  before "place"*/
			for(int i = n-1; i < place; i++)
			{								 
				BabblerMatch = true;
				if(!MatchFound)
				{
					for(int j = n-1 ; j > 0; j--) 
					{ 											
						if(output.at(OutputLocation-j) != text.at(i-j))
						{
							BabblerMatch = false;
						}
					}
					if(BabblerMatch) //In case that n-1 words match, add word at next slot
					{
						output.at(OutputLocation) = text.at(i);
						MatchFound = true;
					}
				}
			}
		}

		/* If no matches are found, babbler has been
		exhausted and the while loop will exit before vector is filled*/
		if(!MatchFound) 
			break;

		MatchFound = false;
		OutputLocation++;
	}

	for(vector<string>::iterator it = output.begin(); it != output.end(); it++)
		cout << *it << " ";

	return 0;
}