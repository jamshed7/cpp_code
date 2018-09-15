#ifndef HUMAN_TRAIT_MAPS_H
#define HUMAN_TRAIT_MAPS_H


#include "jxj6821_Genotype.h"

class Human_Trait_Maps
{
    public:
        Human_Trait_Maps();

        string get_gender_phenotype(Genotype genotype);
        string get_rh_factor_phenotype(Genotype genotype);
        string get_handedness_phenotype(Genotype genotype);

    protected:
        map<Genotype, string> gender;
        map<Genotype, string> rh_factor;
        map<Genotype, string> handedness;
};

#endif
