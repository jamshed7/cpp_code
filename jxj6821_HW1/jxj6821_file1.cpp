#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <string> stringvector;

    string line;

    int count1 = 0;
    int count2 = 0;

    while(1)
    {
        cout << "Enter a string input: " << endl;

        getline(cin, line);

        if(line == "STOP")
            break;
        else
            stringvector.push_back(line);
            count1++;
    }

    vector <double> doublevector;

    double x;

    while(1)
    {
        cout << "Enter a double input: " << endl;

        cin >> x;

        if( x == -999.00)
            break;
        else
            doublevector.push_back(x);
            count2++;
    }

    int n;

    n = count1;

    if( count1 > count2)
        n = count2;

    for( int i =0; i < n; i++)
    {
        cout << stringvector[i] << "    " << doublevector[i] << endl;
    }



    return 0;
}
