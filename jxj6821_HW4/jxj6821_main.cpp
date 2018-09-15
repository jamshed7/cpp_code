#include <iostream>
#include "jxj6821_Multiple_Alleles.h"

using namespace std;

int main()
{
    Allele single_allele('R',1);
    cout<< "\nAllele object was created with letter:'R' and dominance:1"<< endl;
    cout<< "GET FUNCTIONS:" << endl;
    cout<< "get_letter: "<< single_allele.get_letter() << endl;
    cout<< "get_dominance: "<< single_allele.get_dominance() << endl;
    cout<< "OBJECT:\n" << single_allele << "\n";


    Multiple_Alleles multiple_allele('P', 1, 'Q');
    cout<< "Multiple_Alleles object was created with letter 1:'P', dominance:1 and letter 2:'Q'"<< endl;
    cout<< "GET FUNCTIONS:" << endl;
    cout<< "get_letter: "<< multiple_allele.get_letter() << endl;
    cout<< "get_dominance: "<< multiple_allele.get_dominance() << endl;
    cout<< "get_letter_two: "<< multiple_allele.get_letter_two() <<endl;
    cout<< "OBJECT:\n"<< multiple_allele << "\n";


    return 0;
}
