#ifndef jxj6821_PEA_PLANT_H
#define jxj6821_PEA_PLANT_H
#include "jxj6821_Trait.h"
#include <sstream>

using namespace std;

class Pea_Plant
{
    public:
        Pea_Plant(){};

        string view_all_traits();

        void add_seed_color(Trait t);
        void add_seed_shape(Trait t);
        void add_pod_color(Trait t);
        void add_pod_shape(Trait t);
        void add_flower_color(Trait t);
        void add_flower_position(Trait t);
        void add_plant_height(Trait t);

    private:
        Trait seed_color;
        Trait seed_shape;
        Trait pod_color;
        Trait pod_shape;
        Trait flower_color;
        Trait flower_position;
        Trait plant_height;
};

#endif // PEA_PLANT_H
