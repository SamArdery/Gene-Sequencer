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
	cout << "1 - Create Chromotid" << endl;
	cout << "2 - Analyze Chromotid" << endl;
	cout << "3 - Output Chromotid to file" << endl;
	cout << "4 - Input Chromotid from file" << endl;
	cout << "5 - Combine Two Chromotids" << endl;
	cout << "6 - Exit" << endl;
	cout << endl;
}

int main(int argc, char *argv[])

{
	int userChoice = 1;

	while (userChoice > 0 || userChoice < 7)
	{
		Allele userAllele;
		vector<string> alleleInput(8);
		PrintMenu(userChoice);
		cin >> userChoice;
		switch (userChoice)
		{
		case 1:
			userAllele.SetAllele(string v, string t, string s);
			break;
		case 2:
			userAllele.GetAllele();
			break;
		case 3:
			userAllele.WriteAlleleToFile();
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