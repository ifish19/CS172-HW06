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
	string year;
	char gender;
	string name;
	string name1;
	string rank = "-1";
	cout << "Enter the year: ";
	cin >> year;
	string filename = "Babynameranking" + year + ".txt";
	ifstream input(filename.c_str());
	if (input.fail())
		cout << "Data for year " << year << " does not exist" << endl;
	else
	{
		cout << "Enter the gender: ";
		cin >> gender;
		if (gender == 'M' || gender == 'm' || gender == 'F' || gender == 'f')
		{
			string line;
			cout << "Enter the name: ";
			cin >> name;
			while (getline(input, line))
			{
				if (line.find(name) != string::npos)
				{
					string::size_type rankEnd = line.find("	");
					rank = line.substr(0, rankEnd);
					cout << rank << endl;
					//cout << name1 << endl;
					cout << line << endl;
					if (name == name1)
					{
						break;
					}
					
					//rank--; // Rank is consistantly 1 higher than it should be
				}
			}
			if (rank == "-1")
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			else
				cout << name << " is ranked #" << rank << " in the year " << year << endl;
		}
		else
			cout << "INVALID INPUT" << endl;
	}
}