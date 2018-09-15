#include <iostream>
#include <ctype.h>

#include "jxj6821_Plant_Man.h"
#include "jxj6821_Plant_Man_Trait_Maps.h"

using namespace std;

int main(void)
{

//Pea Plant
    string arr[3] = {"Seed Color", "Pod Color", "Plant Height"};
    Pea_Plant_Trait_Maps pptm;
    Pea_Plant pea_plant;

    cout << "\nPEA PLANT:" << endl;

    for(int i=0; i<3; i++)
    {
        char letter1;
        char letter2;
        bool dom1;
        bool dom2;
        string t;
        t = arr[i];

        bool x;
        int loop=0;
        int loop2=0;

        cout << "Please enter information for " << arr[i] << ": "<< endl;
        while(loop!=1)
        {
          cout << "Allele letter 1: ";
          cin >> letter1;
          x = isupper(letter1);
          cout << "Letter 1 dominance(1/0): ";
          cin >> dom1;
          if(x==true && dom1==true)
          {
            loop = 1;
          }
          else if(x==false && dom1 ==false)
          {
            loop = 1;
          }
          else {cerr << "Error! Case of mismatched letter and dominance boolean.\nPlease try again.\n";}
        }
        while(loop2!=1)
        {
          cout << "Allele letter 2: ";
          cin >> letter2;
          x = isupper(letter2);
          cout << "Letter 2 dominance(1/0): ";
          cin >> dom2;
          if(x==true && dom2==true)
          {
            loop2 = 1;
          }
          else if(x==false && dom2 ==false)
          {
            loop2 = 1;
          }
          else {cerr << "Error! Case of mismatched letter and dominance boolean.\nPlease try again.\n";}
        }

        Allele a1(letter1, dom1);
        Allele a2(letter2, dom2);
        Genotype gen(a1, a2);


      if(t == "Seed Color")
      {
          Trait new_trait(t, gen, pptm.get_seed_color_phenotype(gen));
          pea_plant.add_seed_color(new_trait);
          cout << "Seed Color added successfully!\n" << endl;

      }
      else if(t == "Pod Color")
      {
          Trait new_trait(t, gen, pptm.get_pod_color_phenotype(gen));
          pea_plant.add_pod_color(new_trait);
          cout << "Pod Color added successfully!\n" << endl;
      }
      else if(t == "Plant Height")
      {
          Trait new_trait(t, gen, pptm.get_plant_height_phenotype(gen));
          pea_plant.add_plant_height(new_trait);
          cout << "Plant Height added successfully!\n" << endl;
      }

    }



//Human
    string arr_h[3] = {"Gender", "Rh Factor", "Handedness"};
    Human_Trait_Maps htm;
    Human human;

    cout << "HUMAN:" << endl;

    for(int i=0; i<3; i++)
    {
        char letter1;
        char letter2;
        bool dom1;
        bool dom2;
        string t;
        t = arr_h[i];

        bool x;
        int loop=0;
        int loop2=0;

        cout << "Please enter information for " << arr_h[i] << ": "<< endl;
        while(loop!=1)
        {
          cout << "Allele letter 1: ";
          cin >> letter1;
          x = isupper(letter1);
          cout << "Letter 1 dominance(1/0): ";
          cin >> dom1;
          if(x==true && dom1==true)
          {
            loop = 1;
          }
          else if((x==false && dom1 ==false) || (letter1=='X' && dom1==false))
          {
            loop = 1;
          }
          else {cerr << "Error! Case of mismatched letter and dominance boolean.\nPlease try again.\n";}
        }
        while(loop2!=1)
        {
          cout << "Allele letter 2: ";
          cin >> letter2;
          x = isupper(letter2);
          cout << "Letter 2 dominance(1/0): ";
          cin >> dom2;
          if(x==true && dom2==true)
          {
            loop2 = 1;
          }
          else if((x==false && dom2 ==false) || (letter2=='X' && dom2==false))
          {
            loop2 = 1;
          }
          else {cerr << "Error! Case of mismatched letter and dominance boolean.\nPlease try again.\n";}
        }

        Allele a1(letter1, dom1);
        Allele a2(letter2, dom2);
        Genotype gen(a1, a2);


      if(t == "Gender")
      {
          Trait new_trait(t, gen, htm.get_gender_phenotype(gen));
          human.add_gender(new_trait);
          cout << "Gender added successfully!\n" << endl;

      }
      else if(t == "Rh Factor")
      {
          Trait new_trait(t, gen, htm.get_rh_factor_phenotype(gen));
          human.add_rh_factor(new_trait);
          cout << "Rh Factor added successfully!\n" << endl;
      }
      else if(t == "Handedness")
      {
          Trait new_trait(t, gen, htm.get_handedness_phenotype(gen));
          human.add_handedness(new_trait);
          cout << "Handedness added successfully!\n" << endl;
      }

    }



//Plant Man
    string arr_pm[3] = {"Seed Color", "Gender", "Plant Height"};
    Plant_Man_Trait_Maps pmtm;
    Plant_Man jeff;

    cout << "PLANT MAN:" << endl;

    for(int i=0; i<3; i++)
    {
        char letter1;
        char letter2;
        bool dom1;
        bool dom2;
        string t;
        t = arr_pm[i];

        bool x;
        int loop=0;
        int loop2=0;

        cout << "Please enter information for " << arr_pm[i] << ": "<< endl;
        while(loop!=1)
        {
          cout << "Allele letter 1: ";
          cin >> letter1;
          x = isupper(letter1);
          cout << "Letter 1 dominance(1/0): ";
          cin >> dom1;
          if(x==true && dom1==true)
          {
            loop = 1;
          }
          else if((x==false && dom1 ==false) || (letter1=='X' && dom1==false))
          {
            loop = 1;
          }
          else {cerr << "Error! Case of mismatched letter and dominance boolean.\nPlease try again.\n";}
        }
        while(loop2!=1)
        {
          cout << "Allele letter 2: ";
          cin >> letter2;
          x = isupper(letter2);
          cout << "Letter 2 dominance(1/0): ";
          cin >> dom2;
          if(x==true && dom2==true)
          {
            loop2 = 1;
          }
          else if( (x==false && dom2 ==false) || (letter2=='X' && dom2==false))
          {
            loop2 = 1;
          }
          else {cerr << "Error! Case of mismatched letter and dominance boolean.\nPlease try again.\n";}
        }

        Allele a1(letter1, dom1);
        Allele a2(letter2, dom2);
        Genotype gen(a1, a2);


      if(t == "Seed Color")
      {
          Trait new_trait(t, gen, pmtm.get_seed_color_phenotype(gen));
          jeff.add_seed_color(new_trait);
          cout << "Seed Color added successfully!\n" << endl;

      }
      else if(t == "Gender")
      {
          Trait new_trait(t, gen, pmtm.get_gender_phenotype(gen));
          jeff.add_gender(new_trait);
          cout << "Gender added successfully!\n" << endl;
      }
      else if(t == "Plant Height")
      {
          Trait new_trait(t, gen, pmtm.get_plant_height_phenotype(gen));
          jeff.add_plant_height(new_trait);
          cout << "Plant Height added successfully!\n" << endl;
      }

    }

cout << "\n\nList of all added traits:\n"<<endl;

    cout<< "Pea Plant:\n" <<pea_plant.view_all_traits();
    cout<< "Human:\n"<<human.view_all_traits();
    cout<< "Plant Man:\n"<<jeff.view_all_traits();


    return 0;
}
