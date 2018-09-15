#ifndef LIVING_THING_H
#define LIVING_THING_H

#include <iostream>
#include <sstream>

using namespace std;

class Living_Thing
{
    public:
        Living_Thing(){};
        Living_Thing(string n):name(n){};

        string get_name();

        virtual string view_all_traits() = 0;

    protected:
        string name;
};

#endif // LIVING_THING_H
