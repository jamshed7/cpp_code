#ifndef jxj6821_VIEW_H
#define jxj6821_VIEW_H
#include "jxj6821_Pea_Plant.h"

using namespace std;

class View
{
    public:
        View(Pea_Plant& pp): pea_plant(pp) {};

        void get_menu();

        void prompt_for_allele_letter();
        void prompt_for_allele_dominance();
        void prompt_for_trait_name();

        void view_all_traits();



    private:
        Pea_Plant& pea_plant;
};

#endif // jxj6821_VIEW_H
