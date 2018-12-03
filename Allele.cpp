#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Allele.h"

using namespace std;

Allele::Allele() {}

Allele::Allele(string v, string t, string s)
{
	this->variantName = v;
	this->variantType = t;
	this->nucleotideSequence = s;
}
void Allele::SetAllele(string v, string t, string s)
{
	cout << "For the following steps, please use hyphens(-) instead of spaces" << endl;
	cout << "Please input allele name: ";
	cin >> v;
	this->variantName = v;
	cout << "Please input allele type: ";
	cin >> t;
	this->variantType = t;
	cout << "Please input allele sequence: ";
	cin >> s;
	this->nucleotideSequence = s;
}
void Allele::GetAllele()
{
	cout << this->variantName << ", " << this->variantType << "," << this->nucleotideSequence;
}
void Allele::WriteAlleleToFile(ofstream &write)
{
	write << this->variantName << ", " << this->variantType << ", " << this->nucleotideSequence << ", ";
}

void Allele::GetDominantAllele()
{
	if (this->variantType == "Dominant")
	{
		cout << this->variantName << ", " << this->variantType << ", " << this->nucleotideSequence;
	}
}