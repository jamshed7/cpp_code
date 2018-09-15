#include "jxj6821_Allele.h"

Allele::Allele(){};
Allele::~Allele(){};

Allele::Allele(char l, bool d)
    {
        letter = l;
        dominance = d;
    }

char Allele::get_letter ()
    {
        return letter;
    }
bool Allele::get_dominance ()
    {
        return dominance;
    }


