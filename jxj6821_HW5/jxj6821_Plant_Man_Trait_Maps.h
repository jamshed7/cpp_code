#ifndef PLANT_MAN_TRAIT_MAPS
#define PLANT_MAN_TRAIT_MAPS

#include "jxj6821_Pea_Plant_Trait_Maps.h"
#include "jxj6821_Human_Trait_Maps.h"

class Plant_Man_Trait_Maps : public Pea_Plant_Trait_Maps, public Human_Trait_Maps
{
  public:
    Plant_Man_Trait_Maps() {};
};

#endif
