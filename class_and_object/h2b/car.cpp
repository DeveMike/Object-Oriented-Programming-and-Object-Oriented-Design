#include "car.h"

#include <iostream>



void Car::printData() const{
    cout << "--------------------------------------------" << endl;
    cout << "Merkki: " << brand<< ", Malli: " << model<< ", Vuosi: " << yearModel<<endl;

}
