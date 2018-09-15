#include "jxj6821_Pea_Plant.h"

//Pea_Plant::Pea_Plant(){};

string Pea_Plant::view_all_traits()
{
    stringstream ss;
    ss<<seed_color<<seed_shape<<pod_color<<pod_shape<<flower_color<<flower_position<<plant_height<<endl;
    return ss.str();

};

void Pea_Plant::add_seed_color(Trait t)
{
    seed_color = t;
}

void Pea_Plant::add_seed_shape(Trait t)
{
    seed_shape = t;
}

void Pea_Plant::add_pod_color(Trait t)
{
    pod_color = t;
}

void Pea_Plant::add_pod_shape(Trait t)
{
    pod_color = t;
}

void Pea_Plant::add_flower_color(Trait t)
{
    flower_color = t;
}

void Pea_Plant::add_flower_position(Trait t)
{
    flower_position = t;
}

void Pea_Plant::add_plant_height(Trait t)
{
    plant_height = t;
}
