#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <ostream>

using namespace std;

int main()
{
	cout << "Enter name of file to search:" << endl; //Reading in File Name
	string filename;
	cin >> filename;

	ifstream txt(filename.c_str()); //Creating Reader

	if(!txt)
	{
		cout << "Error: unable to read file."<< endl;
		return 1;
	}

	cout << "Select and 'n' for the babbler to use: " << endl;
	int n;
	cin >> n;

	char byte[1];

	while(jpeg.read(byte,1))
	{
		if((unsigned char) byte[0] == (char) '0020')
			break;
		jpeg.read(byte,1);
	}


	return 0;
}