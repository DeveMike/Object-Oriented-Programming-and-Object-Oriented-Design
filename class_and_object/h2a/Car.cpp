#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(){

    cout<<" Car List"<<endl;
    cout<<" ---------"<<endl;

}

// Getterit
string Car::getBrand() const {
    return brand;
}

string Car::getModel() const {
    return model;
}

int Car::getYearModel() const {
    return yearModel;
}

// Setterit
void Car::setBrand(const string &newBrand) {
    brand = newBrand;
}

void Car::setModel(const string &newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}

void Car::printData() const {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << yearModel << endl;

    cout<<" ---------"<<endl;

}
