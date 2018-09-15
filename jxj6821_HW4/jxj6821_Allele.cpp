#include "jxj6821_Allele.h"

char Allele::get_letter()
{
    return letter;
}
bool Allele::get_dominance()
{
    return dominance;
}

ostream& operator << (ostream& ost, const Allele& rhs)
{
    Allele allele = rhs;
    char allele_letter = allele.get_letter();
    bool allele_dominance = allele.get_dominance();

    ost<<"Letter: "<<allele_letter<<"\tDominance: "<<allele_dominance<<"\n\n";
    return ost;
}
