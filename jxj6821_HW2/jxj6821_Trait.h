#ifndef TRAIT_H
#define TRAIT_H
#include <iostream>
#include "jxj6821_Genotype.h"
#include <string>

using namespace std;

class Trait
{
public:

    Trait();
    ~Trait();

    Trait(string n, Genotype g, string p);

    string get_name();
    Genotype get_genotype();
    string get_phenotype();

    friend ostream& operator << (ostream& ost, const Trait& T);

private:
    string name;
    Genotype genotype;
    string phenotype;
};

#endif // TRAIT_H
