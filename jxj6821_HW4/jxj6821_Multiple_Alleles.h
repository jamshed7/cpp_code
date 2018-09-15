#ifndef jxj6821_MULTIPLE_ALLELES_H
#define jxj6821_MULTIPLE_ALLELES_H
#include "jxj6821_Allele.h"


class Multiple_Alleles : public Allele
{
    public:
        Multiple_Alleles();

        Multiple_Alleles(char  l, bool d, char l_two): letter_two(l_two), Allele(l, d) {};

        char get_letter_two();

        friend ostream& operator<< (ostream& ost, const Multiple_Alleles& rhs);

    private:
        char letter_two;
};

#endif // MULTIPLE_ALLELES_H
