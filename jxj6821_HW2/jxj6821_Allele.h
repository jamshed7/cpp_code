#ifndef ALLELE_H
#define ALLELE_H
#include <iostream>
#include <string>

using namespace std;

class Allele
{
    public:
        Allele();
        ~Allele();

        Allele(char l, bool d);

        char get_letter ();
        bool get_dominance ();


    private:
        char letter;
        bool dominance;
};

#endif // ALLELE_H
