#include "car.h"
#include <iostream>

Car::Car()
{

}

Car::Car(string m, string b) : model(m), brand(b) {}

void Car::setEngine()
{
  objEngine.setHorsepower(150);
  objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel2.setSize(17);
    objWheel3.setSize(17);
    objWheel4.setSize(17);

    objWheel1.setType("kesarenkaat");
    objWheel2.setType("kesarenkaat");
    objWheel3.setType("kesarenkaat");
    objWheel4.setType("kesarenkaat");



}

string Car::getModel()
{
    return model;
}


void Car::setModel(string m)
{
    model = m;
}

string Car::getBrand()
{
    return brand;
}

void Car::setBrand(string b)
{
    brand = b;
}

void Car::printDetails() {
    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, "
         << objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, "
         << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, "
         << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, "
         << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, "
         << objWheel4.getType() << endl;
}
