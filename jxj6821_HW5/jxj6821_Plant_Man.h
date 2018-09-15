#ifndef PLANT_MAN_H
#define PLANT_MAN_H

#include "jxj6821_Plant_Man.h"
#include "jxj6821_Human.h"

class Plant_Man : public Pea_Plant, public Human
{
    public:
        Plant_Man() {};
        string view_all_traits();
};

#endif // PLANT_MAN_H
