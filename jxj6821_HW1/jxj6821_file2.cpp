#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string line;

    vector <string> myStrings;

    ifstream myfile("HW1_text1.txt");
    if(myfile.is_open())
    {
        while(myfile.good())
        {
            getline(myfile, line);
            myStrings.push_back(line);
        }
    }
    else
    {
        cout << "Error! HW1_text1.txt cannot be opened." << endl;
        return 1;
    }

    ofstream new_file("output.txt");

    if(!new_file.is_open())
    {
        cout << "Error: Failed to create output.txt file.";
        return 1;
    }


    double sum = 0;
    int n = 0;

    for(int i=0; i < myStrings.size(); i++)
    {
        stringstream object;
        double converted_string;

        object << myStrings[i];
        object >> converted_string;

        if(isdigit(myStrings[i][0]))
        {
            sum+= converted_string;
            n++;
        }
        else
            new_file << myStrings[i] << endl;
    }

    cout << "File output.txt was created successfully.\n" << endl;
    cout << "The average of all numbers in input file is: " << sum/n << endl;

    myfile.close();
    new_file.close();


    return 0;

}
