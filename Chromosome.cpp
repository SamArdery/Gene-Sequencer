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

void Chromosome::InputChromosome()
{
	string line;
	ifstream write;
	while (getline(write, line))
	{
		int position = line.find(",");
		string geneName = line.substr(0, position);
		line.erase(position);
		position = line.find(",");
		Gene tempGene;
		string test = "test";
		tempGene.SetGene(geneName, test);
		genes.push_back(tempGene);
	}
}