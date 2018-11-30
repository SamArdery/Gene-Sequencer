#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Allele.h"

using namespace std;
void Allele::SetAllele(vector<string> GeneToBeWritten(8))
{
	cout << "For the following steps, please use hyphens(-) instead of spaces" << endl;
	cout << "Please input gene name: ";
	cin >> GeneToBeWritten.at(0);
	cout << "Please input the gene trait: ";
	cin >> GeneToBeWritten.at(1);
	cout << "Please input first allele variant: ";
	cin >> GeneToBeWritten.at(2);
	cout << "Please input first allele type:";
	cin >> GeneToBeWritten.at(3);
	cout << "Please input first allele nucleotide sequence: ";
	cin >> GeneToBeWritten.at(4);
	cout << "Please input second allele variant: ";
	cin >> GeneToBeWritten.at(5);
	cout << "Please input second allele type:";
	cin >> GeneToBeWritten.at(6);
	cout << "Please input second allele nucleotide sequence: ";
	cin >> GeneToBeWritten.at(7);
}
void Allele::WriteAlleleToFile(ifstream input)
{
	input GeneToBeWritten;
}
void Allele::GetAllele()
{
	if (GeneToBeWritten.at(3) != "dominant")
	{
		cout << "Name: " << GeneToBeWritten.at(0) << endl;
		cout << "Genetic Trait: " << GeneToBeWritten.at(1) << endl;
		cout << "Expressed Allele: " << GeneToBeWritten.at(5) << "-" << GeneToBeWritten.at(6) << endl;
		cout << "Nucleotide Sequence: " << GeneToBeWritten.at(7) << endl;
	}
	else
	{
		cout << "Name: " << GeneToBeWritten.at(0) << endl;
		cout << "Genetic Trait: " << GeneToBeWritten.at(1) << endl;
		cout << "Expressed Allele: " << GeneToBeWritten.at(2) << "-" << GeneToBeWritten.at(3) << endl;
		cout << "Nucleotide Sequence: " << GeneToBeWritten.at(4) << endl;
	}
}