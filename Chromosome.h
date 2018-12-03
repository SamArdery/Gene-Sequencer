#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Allele.h"
#include "Gene.h"
#ifndef CHROMOSOME_H
#define CHROMOSOME_H

using namespace std;
class Chromosome
{
  private:
	vector<Gene> genes;

  public:
	Chromosome();
	void AddGene(Gene g);
	void WriteChromosomeToFile(ofstream &);
	void InputChromosome();
};

#endif