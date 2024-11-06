#include "functions.h"
#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Syötä ensimmäinen luku: ";
    cin >> a;
    cout << "Syötä toinen luku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    cout <<"Summan palautus: "<< retSum(a,b) << endl;
    cout <<"Osamäärän palautus: " << retDiv(a, b) << endl;

        return 0;
}
