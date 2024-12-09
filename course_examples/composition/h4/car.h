#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(string, string);
    void setEngine();
    void setWheels();
    string getModel();
    void setModel(string);
    string getBrand();
    void setBrand(string);

    void printDetails();

};

#endif // CAR_H
