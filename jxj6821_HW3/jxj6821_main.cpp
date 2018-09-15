#include "jxj6821_Controller.h"

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    Pea_Plant pea_plant;

    View view(pea_plant);

    Controller controller(pea_plant, view);

    controller.cli();

    return 0;
}
