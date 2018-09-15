#include "jxj6821_Trait.h"

Trait::Trait(string n, Genotype g, string p)
    {
        name = n;
        genotype = g;
        phenotype = p;
    }

Trait::Trait(){};
Trait::~Trait(){};

    string Trait::get_name()
    {
        return name;
    }
    Genotype Trait::get_genotype()
    {
        return genotype;
    }
    string Trait::get_phenotype()
    {
        return phenotype;
    }

    ostream& operator << (ostream& ost, const Trait& T)
    {
        Trait trait = T;
        string name = trait.name;
        Genotype genotype = trait.get_genotype();
        char allele_1 = genotype.get_allele_one().get_letter();
        char allele_2 = genotype.get_allele_two().get_letter();
        string phenotype = trait.get_phenotype();

        ost <<"Name: "<< name<< "\n" << "Genotype: " <<allele_1<<allele_2<<"\n"<<"Phenotype: "<<phenotype<<"\n\n";
        return ost;

    }; //here
