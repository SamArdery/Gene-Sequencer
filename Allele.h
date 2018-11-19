#include <iostream>
#include <fstream>
#ifndef ALLELE_H
#define ALLELE_H

using namespace std;

class Allele
{
  private:
	string nucleotideSeqence;
	string variantName;
	string variantType;

  public:
	Allele();
	Allele(string, string, string);
	void WriteAlleleToFile(ofstream &);
	void SetAllele();
	void GetAllele();
	bool RunUnitTest();
};

#endif