#include <iostream>
#include "myfunctions.h"
using namespace std;


int main()
{
    int num;
    int result;
    int n, k;
    cout <<"LASKETAAN kertoma!" << endl;
    cout << "anna pos luku" << endl;

    cin >> num;
    result = factorial(num);
    if (result == -1) {
      cout << "Kertomaa ei voi laskea negatiiviselle luvulle" << endl;
    } else {
      cout << "Luvun " << num << " kertoma = " << factorial(num) << endl;
    }

cout << "Anna n" << endl;
cin >> n;
cout << "Anna k" << endl;
cin >> k;
result = coefficient(n, k);
cout << n << "yli" << k << " = " << result << endl;

return 0;
}
