#ifndef PEA_PLANT_TRAIT_MAPS_H
#define PEA_PLANT_TRAIT_MAPS_H


#include "jxj6821_Genotype.h"

class Pea_Plant_Trait_Maps
{
    public:
        Pea_Plant_Trait_Maps();

        string get_seed_color_phenotype(Genotype genotype);
        string get_pod_color_phenotype(Genotype genotype);
        string get_plant_height_phenotype(Genotype genotype);

    protected:
        map<Genotype, string> seed_color;
        map<Genotype, string> pod_color;
        map<Genotype, string> plant_height;
};

#endif // PEA_PLANT_TRAIT_MAPS_H
