#ifndef GENOTYPE_H
#define GENOTYPE_H
#include "jxj6821_Allele.h"
#include <iostream>
#include <string>

using namespace std;

class Genotype
{
public:
    Genotype();
    ~Genotype();
    Genotype(Allele a_one, Allele a_two);

    Allele get_allele_one();

    Allele get_allele_two();

    bool operator< (const Genotype& rhs);

private:
    Allele allele_one;
    Allele allele_two;
};


#endif // GENOTYPE_H
