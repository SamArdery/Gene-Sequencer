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
	int chrmsmNum;
	Chromosome chrNum1;
	Chromosome chrNum2;
	Gene geneNum;

	while (userChoice > 0 || userChoice < 7)
	{
		PrintMenu(userChoice);
		cin >> userChoice;
		if (userChoice == 1)
		{
			char userChar = 'Y';
			while (userChar == 'Y')
			{
				string n, trait;
				geneNum.SetGene(n, trait);
				cout << "Would you like to add to the first or second chromosome? Enter 1 or 2.";
				cin >> chrmsmNum;
				if (chrmsmNum = 1)
				{
					chrNum1.AddGene(geneNum);
				}
				else
				{
					chrNum2.AddGene(geneNum);
				}
				cout << "Would you like to add another gene? Enter Y for yes and N for no: ";
				cin >> userChar;
			}
		}
		else if (userChoice == 2)
		{
			geneNum.OutputDominant();
			cout << endl;
		}
		else if (userChoice == 3)
		{
			ofstream write;
			write.open("chromosomes1.txt");
			chrNum1.WriteChromosomeToFile(write);
			write.close();
			write.open("chromosomes2.txt");
			chrNum2.WriteChromosomeToFile(write);
			write.close();
			cout << "Chromosome has been output to file" << endl;
		}
		else if (userChoice == 4)
		{
			ifstream write;
			write.open("chromosomes1.txt");
			chrNum1.InputChromosome();
			write.close();
			write.open("chromsomes2.txt");
			chrNum2.InputChromosome();
			write.close();
			cout << "Chromosome has been input from file" << endl;
		}
		else if (userChoice == 5)
		{
			Chromosome chrNum3 = chrNum1 + chrNum2;
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