#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Allele.h"

using namespace std;
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
	cout << "Please input allele type: ";
	cin >> t;
	cout << "Please input allele sequence: ";
	cin >> s;
}
void Allele::GetAllele()
{
}
void Allele::WriteAlleleToFile(ofstream &write)
{
	write << v << ", " << t << ", " << s << ", ";
}