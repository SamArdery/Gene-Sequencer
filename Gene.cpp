#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Allele.h"
#include "Gene.h"

using namespace std;

Gene::Gene(Allele m, Allele f)
{
	this->alleleM = m;
	this->alleleF = f;
}

void Gene::SetGene(string n, string trait)
{
	cout << "For the following steps, please use hyphens(-) instead of spaces" << endl;
	cout << "Please input gene name: ";
	cin >> n;
	this->geneName = n;
	cout << "Please enter gene trait: ";
	cin >> trait;
	this->traitType = trait;
	alleleM.SetAllele(string v, string t, string s);
	alleleF.SetAllele(string v, string t, string s);
}

void Gene::GetGene()
{
	cout << this->geneName << ", " << this->traitType << ", " << alleleM.GetAllele << ", " << alleleF.GetAllele;
}

void Gene::WriteGeneToFile(ofstream &write)
{
	write << this->geneName << ", " << this->traitType << ", ";
	this->alleleM.WriteAlleleToFile(write);
	this->alleleF.WriteAlleleToFile(write);
}