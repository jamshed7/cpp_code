#include "jxj6821_Pea_Plant_Trait_Maps.h"

Pea_Plant_Trait_Maps::Pea_Plant_Trait_Maps()
{
    Allele Y('Y', true);
    Allele y('y', false);
    Allele G('G', true);
    Allele g('g', false);
    Allele T('T', true);
    Allele t('t', false);



    Genotype YY(Y, Y);
    Genotype Yy(Y, y);
    Genotype yy(y, y);

    Genotype GG(G, G);
    Genotype Gg(G, g);
    Genotype gg(g, g);

    Genotype TT(T, T);
    Genotype Tt(T, t);
    Genotype tt(t, t);


    seed_color.insert(make_pair(YY, "Yellow"));
    seed_color.insert(make_pair(Yy, "Yellow"));
    seed_color.insert(make_pair(yy, "Green"));

    pod_color.insert(make_pair(GG, "Green"));
    pod_color.insert(make_pair(Gg, "Green"));
    pod_color.insert(make_pair(gg, "Yellow"));

    plant_height.insert(make_pair(TT, "Tall"));
    plant_height.insert(make_pair(TT, "Tall"));
    plant_height.insert(make_pair(tt, "Short"));
};

string Pea_Plant_Trait_Maps::get_seed_color_phenotype(Genotype genotype)
{
    return seed_color[genotype];
}

string Pea_Plant_Trait_Maps::get_pod_color_phenotype(Genotype genotype)
{
    return pod_color[genotype];
}

string Pea_Plant_Trait_Maps::get_plant_height_phenotype(Genotype genotype)
{
    return plant_height[genotype];
}
