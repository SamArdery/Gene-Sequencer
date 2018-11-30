/*	Project:    Gene Sequencer (Programing Assignment 5)
	Name:       Sam Ardery
    Class:      CSC 1810 - Section 1
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Allele.h"

using namespace std;

void PrintMenu(int &x)
{
	cout << endl;
	cout << "1 - Create Chromosome" << endl;
	cout << "2 - Analyze Chromosome" << endl;
	cout << "3 - Output Chromosome to file" << endl;
	cout << "4 - Input Chromosome from file" << endl;
	cout << "5 - Combine Two Chromosomes" << endl;
	cout << "6 - Exit" << endl;
	cout << endl;
}

int main(int argc, char *argv[])

{
	int userChoice = 1;

	while (userChoice > 0 || userChoice < 7)
	{
		PrintMenu(userChoice);
		cin >> userChoice;
		switch (userChoice)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		default:
			cout << "Invalid input, please try again." << endl;
			break;
		}
	}

	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
		cin.ignore();
	}
	return 0;
}