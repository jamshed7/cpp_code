#include "jxj6821_Pea_Plant.h"


/*Pea_Plant::Pea_Plant()
{
  Living_Thing("Deafult");
}*/

string Pea_Plant::view_all_traits()
{
    stringstream ss;
    ss<<seed_color<<pod_color<<plant_height<<endl;
    return ss.str();
};

void Pea_Plant::add_seed_color(Trait t)
{
    seed_color = t;
}

void Pea_Plant::add_pod_color(Trait t)
{
    pod_color = t;
}

void Pea_Plant::add_plant_height(Trait t)
{
    plant_height = t;
}
