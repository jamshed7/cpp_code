#ifndef HUMAN_H
#define HUMAN_H

#include "jxj6821_Pea_Plant.h"
#include "jxj6821_Living_Thing.h"

class Human : virtual public Living_Thing
{
    public:
        Human(){};
        //Human(string name) : Living_Thing(name) {};

        string view_all_traits();

        void add_gender(Trait t);
        void add_rh_factor(Trait t);
        void add_handedness(Trait t);

    protected:
        Trait gender;
        Trait rh_factor;
        Trait handedness;

};

#endif // HUMAN_H
