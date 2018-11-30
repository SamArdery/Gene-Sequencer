#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Allele.h"
#ifndef GENE_H
#define GENE_H

using namespace std;

class Gene
{
  private:
	string geneName;
	string traitType;
	Allele alleleM;
	Allele alleleF;

  public:
	Gene();
	Gene(Allele x, Allele y);
	void SetGene(string, string);
	void GetGene();
	void WriteGeneToFile(ofstream &);
};

#endif