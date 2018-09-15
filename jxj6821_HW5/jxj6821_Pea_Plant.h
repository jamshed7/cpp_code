#ifndef PEA_PLANT_H
#define PEA_PLANT_H

#include "jxj6821_Trait.h"
#include "jxj6821_Living_Thing.h"

class Pea_Plant :  virtual public Living_Thing
{
    public:
        Pea_Plant(){};
        //Pea_Plant(string name) : Living_Thing(name) {};

        string view_all_traits();

        void add_seed_color(Trait t);
        void add_pod_color(Trait t);
        void add_plant_height(Trait t);

    protected:
        Trait seed_color;
        Trait pod_color;
        Trait plant_height;
};

#endif // PEA_PLANT_H
