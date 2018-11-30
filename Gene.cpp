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

void Gene::SetGene(string n, string p)
{
	cout << "For the following steps, please use hyphens(-) instead of spaces" << endl;
	cout << "Please input gene name: ";
	cin >> n;
	cout << "Please enter gene trait: ";
	cin >> p;
	alleleM.SetAllele(string v, string t, string s);
	alleleF.SetAllele(string v, string t, string s);
}
void Gene::WriteGeneToFile(ofstream &write)
{
	write << n << ", " << p << ", ";
	alleleM.WriteAlleleToFile(write);
	alleleF.WriteAlleleToFile(write);
}