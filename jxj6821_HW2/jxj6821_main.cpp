#include <iostream>
#include <string>
#include "jxj6821_Allele.h"
#include "jxj6821_Genotype.h"
#include "jxj6821_Trait.h"

using namespace std;

int main()
{
    Allele R ('R', true);
    Genotype RR (R, R);

    Allele Y ('Y', true);
    Allele y ('y', false);
    Genotype Yy (Y, y);

    Allele I ('I', true);
    Allele i ('i', false);
    Genotype Ii (I, i);

    Allele g ('g', false);
    Genotype gg (g, g);

    Allele P ('P', true);
    Allele p ('p', false);
    Genotype Pp (P, p);

    Allele A ('A', true);
    Allele a ('a', true);
    Genotype Aa (A, a);

    Allele T ('T', true);
    Genotype TT (T, T);

    Trait Seed_Shape("Seed Shape", RR, "Round");
    Trait Seed_Color("Seed Color", Yy, "Yellow");
    Trait Pod_Shape("Pod Shape", Ii, "Inflated");
    Trait Pod_color("Pod Color", gg, "Yellow");
    Trait Flower_Color("Flower Color", Pp, "Purple");
    Trait Flower_Position("Flower Position", Aa, "Axial");
    Trait Plant_Height("Plant Height", TT, "Tall");


    cout<<Seed_Color<<Seed_Shape<<Pod_Shape<<Pod_color<<Flower_Color<<Flower_Position<<Plant_Height<<endl;

    return 0;
}
