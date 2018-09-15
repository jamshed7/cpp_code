#include "jxj6821_Plant_Man.h"

//nothing in this file
string Plant_Man::view_all_traits()
{
    stringstream ss;
    ss<<seed_color<<gender<<plant_height<<endl;
    return ss.str();

};
