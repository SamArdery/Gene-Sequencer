#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"

using namespace std;

Chromosome::Chromosome() {}

void Chromosome::AddGene(Gene g)
{
	genes.push_back(g);
}
void Chromosome::WriteChromosomeToFile(ofstream &write)
{
	for (unsigned int i = 0; i < genes.size(); i++)
	{
		genes.at(i).WriteGeneToFile(write);
	}
}