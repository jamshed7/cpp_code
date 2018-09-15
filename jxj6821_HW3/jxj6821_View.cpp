#include "jxj6821_View.h"

//View::View(Pea_Plant& pp){};

void View::get_menu()
{
    string menu = "=================\nPea Plant Traits\n=================\n(1) View all Traits\n(2) Add/edit Trait\n(0) Exit";

    cout << menu << endl;
}

void View::prompt_for_allele_letter()
{
    cout << "Enter allele letter: ";
}
void View::prompt_for_allele_dominance()
{
    cout << "Enter truth value for dominance (True:1/False:0): ";
}
void View::prompt_for_trait_name()
{
    cout << "Enter trait name: ";
}


void View::view_all_traits()
{
    cout<< pea_plant.view_all_traits();
}
