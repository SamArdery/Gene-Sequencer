#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"

using namespace std;

void Chromosome::AddGene(Gene g)
{
	genes.push_back(g);
}
void Chromosome::WriteChromosomeToFile(ofstream &write)
{
}