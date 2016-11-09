////////////////////////////////////////////////////////////////////////
// Ian Fish
// CS172-HW06
////////////////////////////////////////////////

#include<iostream>
#include<string> // for string class
#include"EX06_01.h" // include code from EX06_01
#include"EX06_02.h" // include code from EX06_02
#include"EX06_03.h"
#include"EX06_04.h" // includes circle class
using namespace std;

int main()
{
	/////////////////////
	// EX06_01
	//////////////////////
	EX06_01(); // creates a .txt file and writes in intergers

	////////////////////
	// EX06_02
	///////////////////
	string filename;
	// Prompt for file name
	cout << "Enter a file name: ";
	cin >> filename;
	// Check how many characters
	cout << "File has " << EX06_02(filename) << " characters" << endl;

	////////////////
	// EX06_03
	////////////////////
	EX06_03(); // Finds popularity rank of specified baby name for a certian year

	///////////////////////
	// EX06_04
	//////////////////////
	Circle c1(2.102);
	Circle c2(1.0);
	Circle c3(46.2);
	Circle c4(7.04);
	

}
