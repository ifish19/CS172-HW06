////////////////////////////////////////////////////////////////////////
// Ian Fish
// CS172-HW06
////////////////////////////////////////////////

#include<iostream>
#include<fstream>
#include<string>
#include"EX06_03.h"
using namespace std;

void EX06_03()
{
	string year; // Desired year
	char gender; // Desired gender
	string name; // Desired name
	int rank = -1; // Rank of desired name
	cout << "Enter the year: ";
	cin >> year;
	// add year to the .txt file name starting with "Babynameranking"
	string filename = "Babynameranking" + year + ".txt";
	// input file for desired year
	ifstream input(filename.c_str());
	// Check if input was succesful
	if (input.fail())
		cout << "Data for year " << year << " does not exist" << endl;
	else
	{
		cout << "Enter the gender: ";
		cin >> gender;
		// Check if gender entered in correct format
		if (gender == 'M' || gender == 'm' || gender == 'F' || gender == 'f')
		{
			string mName; // Stores male name on current line of .txt file
			string mNum; // Stores number of babies with that male name
			string fName; // Stores female name on current line of .txt file
			string fNum; // Stores number of babies with that female name
			cout << "Enter the name: ";
			cin >> name;
			int timesRun = 0; // Stores how many times the loop has run
			while(input.is_open())
			{
				// Transfer input data for current line to storage variables
				input >> rank >> mName >> mNum >> fName >> fNum;
				// Check gender
				if (gender == 'M' || gender == 'm')
				{
					if (name != mName) // check if current name matched desired name
						rank = -1;
					else
						break; // break with current rank stored on rank
				}
				else
				{
					if (name != fName) // check if current name matched desired name
						rank = -1;
					else
						break; // break with current rank stored on rank
				}
				timesRun++;
				// Break loop if end of file is reached by checking if timesRun exeeds number of total lines in file
				if (timesRun > 1000)
					break;
			}
			if (rank == -1)
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			else
				cout << name << " is ranked #" << rank << " in the year " << year << endl;
		}
		else
			cout << "INVALID INPUT" << endl;
	}
}