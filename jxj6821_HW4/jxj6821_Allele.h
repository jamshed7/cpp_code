#ifndef jxj6821_ALLELE_H
#define jxj6821_ALLELE_H
#include <iostream>
#include <string>


using namespace std;

class Allele
{
    public:
        Allele();
        Allele(char l, bool d) : letter(l), dominance(d){};

        char get_letter();
        bool get_dominance();

        friend ostream& operator<< (ostream& ost, const Allele& rhs);


    protected:
        char letter;
        bool dominance;
};

#endif // ALLELE_H
