#include<iostream>
#include<ctime>
#include<fstream>
using namespace std;

void EX06_01()
{
	ofstream output;

	output.open("Exercise13_1.txt", ios::app);

	srand(time(NULL));
	for(int i = 0; i < 100; i++)
	{
		
		output << rand() << " ";
	}
	output << endl;

	output.close();
}