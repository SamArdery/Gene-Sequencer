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
	string nucleotideSeqence;
	string variantName;
	string variantType;

  public:
	Allele();
	Allele(string, string, string);
	void WriteAlleleToFile(ifstream);
	void SetAllele(vector<string> GeneToBeWritten(8));
	void GetAllele();
	bool RunUnitTest();
};

#endif