////////////////////////////////////////////////////////////////////////
// Ian Fish
// CS172-HW06
////////////////////////////////////////////////

#include<iostream>
#include<ctime> // for srand(), time(), and rand()
#include<fstream> // for I/O stream
#include"EX06_01.h"
using namespace std;

void EX06_01()
{
	ofstream output;

	// Create file if it doesn't exist and add to it if it does
	output.open("Exercise13_1.txt", ios::app);

	srand(time(NULL));
	for(int i = 0; i < 100; i++)
	{
		output << rand() << " ";
	}
	output << endl;

	output.close();
}