////////////////////////////////////////////////////////////////////////
// Ian Fish
// CS172-HW06
////////////////////////////////////////////////

#include<iostream>
#include<string> // for string class
#include<fstream> // for I/O stream 
#include"EX06_02.h"
using namespace std;

int EX06_02(string fileName)
{
	int count = 0;
	// Open desired file
	ifstream iofile(fileName.c_str(), ios::in | ios::out);

	// Check if file exists
	if (iofile.fail())
		cout << fileName << " does not exist" << endl;
	
	if (iofile.is_open())
	{
		char current_char;
		while(iofile.get(current_char))
		{
			// End loop if current_char is at the end of the file
			if (current_char == EOF)
			{
				break;
			}
			count++;
		}
	}
	
	return count;
}
