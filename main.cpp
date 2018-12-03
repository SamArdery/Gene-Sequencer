/*	Project:    Gene Sequencer (Programing Assignment 5)
	Name:       Sam Ardery
    Class:      CSC 1810 - Section 1
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include "Sequencer.h"

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
		if (userChoice == 1)
		{
			char userChar = 'Y';
			while (userChar == 'Y')
			{
				Gene geneNum;
				string n, trait;
				geneNum.SetGene(n, trait);
				Chromosome chrNum;
				chrNum.AddGene(geneNum);
				cout << "Would you like to add another gene? Enter Y for yes and N for no: ";
				cin >> userChar;
			}
		}
		else if (userChoice == 2)
		{
		}
		else if (userChoice == 3)
		{
			ofstream write;
			write.open("chromosomes.txt");
			Chromosome chrNum;
			chrNum.WriteChromosomeToFile(write);
			write.close();
		}
		else if (userChoice == 4)
		{
		}
		else if (userChoice == 5)
		{
		}
		else if (userChoice == 6)
		{
			cout << "Goodbye." << endl;
			break;
		}
		else
		{
			cout << "Invalid input, please try again." << endl;
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