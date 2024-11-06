#include "functions.h"

void calcSum(int a, int b){
    int sum = a + b;
    cout << "Summa: " << sum << endl;

}

void calcDiv(int a, int b){
    if(b == 0){
        cout << "Virhe! Jakaja ei voi olla nolla." << endl;

    }else{
        double div = static_cast<double>(a) / b;
        cout << "Osamäärä: " << div << endl;
    }
}

int retSum(int a, int b){
    return a+b;
}

double retDiv(int a, int b){
    if(b==0){
        cout << "Virhe! Jakaja ei voi olla nolla." << endl;
        return 0;
    }else{
        return static_cast<double>(a) / b;
    }
}
