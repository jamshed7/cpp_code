#include "jxj6821_Pea_Plant_Trait_Maps.h"


Pea_Plant_Trait_Maps::Pea_Plant_Trait_Maps()
{
    Allele R('R', true);
    Allele r('r', false);
    Allele Y('Y', true);
    Allele y('y', false);
    Allele I('I', true);
    Allele i('i', false);
    Allele G('G', true);
    Allele g('g', false);
    Allele P('P', true);
    Allele p('p', false);
    Allele A('A', true);
    Allele a('a', false);
    Allele T('T', true);
    Allele t('t', false);


    Genotype RR(R, R);
    Genotype Rr(R, r);
    Genotype rr(r, r);

    Genotype YY(Y, Y);
    Genotype Yy(Y, y);
    Genotype yy(y, y);

    Genotype II(I, I);
    Genotype Ii(I, i);
    Genotype ii(i, i);

    Genotype GG(G, G);
    Genotype Gg(G, g);
    Genotype gg(g, g);

    Genotype PP(P, P);
    Genotype Pp(P, p);
    Genotype pp(p, p);

    Genotype AA(A, A);
    Genotype Aa(A, a);
    Genotype aa(a, a);

    Genotype TT(T, T);
    Genotype Tt(T, t);
    Genotype tt(t, t);


    seed_shape.insert(make_pair(RR, "Round"));
    seed_shape.insert(make_pair(Rr, "Round"));
    seed_shape.insert(make_pair(rr, "Wrinkled"));

    seed_color.insert(make_pair(YY, "Yellow"));
    seed_color.insert(make_pair(Yy, "Yellow"));
    seed_color.insert(make_pair(yy, "Green"));

    pod_shape.insert(make_pair(II, "Inflated"));
    pod_shape.insert(make_pair(Ii, "Inflated"));
    pod_shape.insert(make_pair(ii, "Constricted"));

    pod_color.insert(make_pair(GG, "Green"));
    pod_color.insert(make_pair(Gg, "Green"));
    pod_color.insert(make_pair(gg, "Yellow"));

    flower_color.insert(make_pair(PP, "Purple"));
    flower_color.insert(make_pair(Pp, "Purple"));
    flower_color.insert(make_pair(pp, "White"));

    flower_position.insert(make_pair(AA, "Axial"));
    flower_position.insert(make_pair(Aa, "Axial"));
    flower_position.insert(make_pair(aa, "Terminal"));

    plant_height.insert(make_pair(TT, "Tall"));
    plant_height.insert(make_pair(TT, "Tall"));
    plant_height.insert(make_pair(tt, "Short"));
};

string Pea_Plant_Trait_Maps::get_seed_shape_phenotype(Genotype genotype)
{
    return seed_shape[genotype];
};
string Pea_Plant_Trait_Maps::get_seed_color_phenotype(Genotype genotype)
{
    return seed_color[genotype];
}
string Pea_Plant_Trait_Maps::get_pod_shape_phenotype(Genotype genotype)
{
    return pod_shape[genotype];
}
string Pea_Plant_Trait_Maps::get_pod_color_phenotype(Genotype genotype)
{
    return pod_color[genotype];
}
string Pea_Plant_Trait_Maps::get_flower_color_phenotype(Genotype genotype)
{
    return flower_color[genotype];
}
string Pea_Plant_Trait_Maps::get_flower_position_phenotype(Genotype genotype)
{
    return flower_position[genotype];
}
string Pea_Plant_Trait_Maps::get_plant_height_phenotype(Genotype genotype)
{
    return plant_height[genotype];
}
