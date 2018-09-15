#include "jxj6821_Genotype.h"
#include "jxj6821_Allele.h"

Genotype::Genotype(){};
Genotype::~Genotype(){};
Genotype::Genotype(Allele a_one, Allele a_two)
    {
        if(a_one.get_dominance() && a_two.get_dominance())
        {
            allele_one = a_one;
            allele_two = a_two;
        }
        else if( (a_one.get_dominance() == false) && (a_two.get_dominance() == false) )
        {
            allele_one = a_one;
            allele_two = a_two;
        }
        else if( (a_one.get_dominance() == true) && (a_two.get_dominance() == false) )
        {
            allele_one = a_one;
            allele_two = a_two;
        }
        else if( (a_one.get_dominance() == false) && (a_two.get_dominance() == true))
        {
            allele_two = a_one;
            allele_one = a_two;
        }

    }

Allele Genotype::get_allele_one()
    {
        return allele_one;
    }

Allele Genotype::get_allele_two()
    {
        return allele_two;
    }



bool Genotype::operator< (const Genotype& rhs)
    {
        Genotype g = rhs;
        int first = (int)g.get_allele_one().get_letter()+(int)g.get_allele_two().get_letter();
        int second = (int)get_allele_one().get_letter()+(int)get_allele_two().get_letter();

        if(first < second)
            return true;
        else
            return false;
    }
