#include "dog.h"
#include <iostream>
using namespace std;

Dog::Dog() {

    cout << "Dog Olio Luodaan" << endl;

}

void Dog::callOut() const{
    cout << "Koira haukkuu!" << endl;

}


Dog::~Dog()
{
    cout << "Dog Olio tuhotaan" << endl;

}


