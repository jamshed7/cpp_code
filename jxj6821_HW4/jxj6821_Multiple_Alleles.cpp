#include "jxj6821_Multiple_Alleles.h"

char Multiple_Alleles::get_letter_two()
{
    return letter_two;
}

ostream& operator << (ostream& ost, const Multiple_Alleles& rhs)
{
    Multiple_Alleles m_a = rhs;
    char allele_letter = m_a.get_letter();
    bool allele_dominance = m_a.get_dominance();
    char allele_letter2 = m_a.get_letter_two();

    ost<<"Letter 1: "<<allele_letter<<"\tLetter 1 dominance: "<<allele_dominance<<"\tLetter 2: "<<allele_letter2<<"\n\n";
    return ost;
}
