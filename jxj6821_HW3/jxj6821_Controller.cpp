#include "jxj6821_Controller.h"


void Controller::cli()
{
    int cmd = -1;

    while(cmd!=0)
    {
        view.get_menu();
        cin >> cmd;
        execute_cmd(cmd);
    }
}

void Controller::execute_cmd(int cmd)
{
    switch(cmd)
    {
    case 1:
        cout << "All traits listed below: " << endl;
        view.view_all_traits();
        break;

    case 2:
        add_trait();
        break;

    case 0:
        cout << "Good Bye!" << endl;
        break;

    default:
        cout << "Error: Invalid Option!" << endl;
    }
}

void Controller::add_trait()
{
    char letter1, letter2;
    bool d1, d2;
    string t;

    cout << "\nAvailable Traits:\n=================\nSeed Shape\nSeed Color\nPod Shape\nPod Color\nFlower Color\nFlower Position\nPlant Height\n\n";

    cin.ignore();
    view.prompt_for_trait_name();
    getline(cin, t);

    view.prompt_for_allele_letter();
    cin >> letter1;
    view.prompt_for_allele_dominance();
    cin >> d1;

    view.prompt_for_allele_letter();
    cin >> letter2;
    view.prompt_for_allele_dominance();
    cin >> d2;



    Allele allele_1(letter1, d1);
    Allele allele_2(letter2, d2);
    Genotype gen(allele_1, allele_2);

    if(t == "Seed Shape" || t == "seed shape")
    {
        Trait new_trait(t, gen, pptm.get_seed_shape_phenotype(gen));
        pea_plant.add_seed_shape(new_trait);
        cout << "Trait added successfully!\n" << endl;

    }
    else if(t == "Seed Color" || t == "seed color")
    {
        Trait new_trait(t, gen, pptm.get_seed_color_phenotype(gen));
        pea_plant.add_seed_color(new_trait);
        cout << "Trait added successfully!\n" << endl;
    }
    else if(t == "Pod Shape" || t == "pod shape")
    {
        Trait new_trait(t, gen, pptm.get_pod_shape_phenotype(gen));
        pea_plant.add_pod_shape(new_trait);
        cout << "Trait added successfully!\n" << endl;
    }
    else if(t == "Pod Color" || t == "pod color")
    {
        Trait new_trait(t, gen, pptm.get_pod_color_phenotype(gen));
        pea_plant.add_pod_color(new_trait);
        cout << "Trait added successfully!\n" << endl;
    }
    else if(t == "Flower Color" || t == "flower color")
    {
        Trait new_trait(t, gen, pptm.get_flower_color_phenotype(gen));
        pea_plant.add_flower_color(new_trait);
        cout << "Trait added successfully!\n" << endl;
    }
    else if(t == "Flower Position" || t == "flower position")
    {
        Trait new_trait(t, gen, pptm.get_flower_position_phenotype(gen));
        pea_plant.add_flower_position(new_trait);
        cout << "Trait added successfully!\n" << endl;
    }
    else if(t == "Plant Height" || t == "plant height")
    {
        Trait new_trait(t, gen, pptm.get_plant_height_phenotype(gen));
        pea_plant.add_plant_height(new_trait);
        cout << "Trait added successfully!\n" << endl;
    }
    else
        cout << "\nError:Invalid input! Please make sure trait name is spelled correctly.\n" << endl;
}
