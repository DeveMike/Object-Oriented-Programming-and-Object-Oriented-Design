#include "myfunctions.h"
#include <iostream>

using namespace std;

int main() {
    int num;
    int result;
    int n, k;
    cout << "Lasketaan kertoma!" << endl;
    cout << "Anna positiivinen kokonaisluku" << endl;
    cin >> num;

    //jos try-lohkossa nousee runtime error, hypätään catch-lohkoon
    try {
        result = factorial(num);
        cout << "Luvun " << num << " kertoma = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<<e.what()<<endl;
    }

    return 0;
}
