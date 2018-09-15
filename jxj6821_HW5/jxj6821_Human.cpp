#include "jxj6821_Human.h"

/*Human::Human()
{
  Living_Thing("Default");
}
*/
string Human::view_all_traits()
{
    stringstream ss;
    ss<<gender<<rh_factor<<handedness<<endl;
    return ss.str();
};

void Human::add_gender(Trait t)
{
    gender = t;
}
void Human::add_rh_factor(Trait t)
{
    rh_factor = t;
}
void Human::add_handedness(Trait t)
{
    handedness =  t;
}
