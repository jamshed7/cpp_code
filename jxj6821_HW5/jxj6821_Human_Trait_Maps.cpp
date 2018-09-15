#include "jxj6821_Human_Trait_Maps.h"

Human_Trait_Maps::Human_Trait_Maps()
{
    Allele Y('Y', true);
    Allele X('X', false);
    Allele P('P', true);
    Allele p('p', false);
    Allele R('R', true);
    Allele r('r', false);


    Genotype XY(X, Y);
    Genotype XX(X, X);

    Genotype PP(P, P);
    Genotype Pp(P, p);
    Genotype pp(p, p);

    Genotype RR(R, R);
    Genotype Rr(R, r);
    Genotype rr(r, r);


    gender.insert(make_pair(XY, "Male"));
    gender.insert(make_pair(XX, "Female"));

    rh_factor.insert(make_pair(PP, "Positive"));
    rh_factor.insert(make_pair(Pp, "Positive"));
    rh_factor.insert(make_pair(pp, "Negative"));

    handedness.insert(make_pair(RR, "Right"));
    handedness.insert(make_pair(Rr, "Right"));
    handedness.insert(make_pair(rr, "Left"));
};

string Human_Trait_Maps::get_gender_phenotype(Genotype genotype)
{
    return gender[genotype];
}

string Human_Trait_Maps::get_rh_factor_phenotype(Genotype genotype)
{
    return rh_factor[genotype];
}

string Human_Trait_Maps::get_handedness_phenotype(Genotype genotype)
{
    return handedness[genotype];
}
