#ifndef jxj6821_CONTROLLER_H
#define jxj6821_CONTROLLER_H
#include "jxj6821_View.h"
#include "jxj6821_Pea_Plant_Trait_Maps.h"

class Controller
{
    public:
        Controller(Pea_Plant& pp, View& v):pea_plant(pp), view(v) {};
        void cli();
        void execute_cmd(int cmd);
        void add_trait();

    private:
        Pea_Plant& pea_plant;
        View& view;
        Pea_Plant_Trait_Maps pptm;

};

#endif // jxj6821_CONTROLLER_H
