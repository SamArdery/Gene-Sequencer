#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#ifndef ALLELE_H
#define ALLELE_H

using namespace std;

class Allele
{
  private:
	string nucleotideSequence;
	string variantName;
	string variantType;

  public:
	Allele();
	Allele(string, string, string);
	void SetAllele(string, string, string);
	void GetAllele();
	void WriteAlleleToFile(ofstream &);
	void GetDominantAllele();
	bool RunUnitTest();
};

#endif