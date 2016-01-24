#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <ostream>

using namespace std;

int main(){
	cout<<"Enter name of file to search:"<<endl;
	string filename;
	cin>>filename;

	ifstream jpeg(filename.c_str());

	if(!jpeg){
		cout<<"Error: unable to read file."<<endl;
		return 1;
	}

	char byte[1];
	char buffer[4];
	int filenumber = 0;
	bool writing = false;

	ofstream out;
	ostringstream jpegtitle;
	jpegtitle<<setw(3)<<setfill('0')<<filenumber<<".jpeg";

	while(jpeg.read(byte,1))
	{
		buffer[0] = byte[0];
		if((unsigned char) byte[0] == (char)'0xff')
		{
			jpeg.read(byte,1);
			buffer[1] = byte[0];
			if((unsigned char) byte[0] == (char)'0xd8')
			{
				jpeg.read(byte,1);
				buffer[2] = byte[0];
				if((unsigned char) byte[0] == (char)'0xff')
				{
					jpeg.read(byte,1);
					buffer[3] = byte[0];
					if(unsigned char) byte[0] == (char)'0xe0'
						|| (unsigned char) byte[0] == (char) '0xe1')
					{
						if(writing == true)
						{
							out.close();
							filenumber++;
							jpegtitle.clear();
							jpegtitle<<setw(3)<<setfill('0')<<filenumber<<".jpeg";
						}
						writing = true;
						out.open(jpegtitle.str().c_str());
						out.write(buffer,4);
					}
					else{
						out.write(buffer,4);
					}
				}
				else{
					out.write(buffer,3);
				}
			}
			else{
				out.write(buffer,2);
			}
		}
		else{
			out.write(buffer,1);
		}
	}
	jpeg.close();
	out.close();
	return 0;
}