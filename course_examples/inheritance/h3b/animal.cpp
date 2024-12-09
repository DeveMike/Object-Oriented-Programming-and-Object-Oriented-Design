#include "animal.h"
#include <iostream>
using namespace std;

Animal::Animal() {
    cout << "Animal olio luodaan." << endl;

}

void Animal::callOut() const {
    cout << "Eläin ääntelee." << endl;
}


Animal::~Animal()
{
    cout << "Animal olio tuhotaan." << endl;

}


