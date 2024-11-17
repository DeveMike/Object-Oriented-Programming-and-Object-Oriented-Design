#ifndef CAR_H
#define CAR_H

#include <string>


using namespace std;

class Car
{

private:
    string brand;
    string model;
    int yearModel;

public:
    Car(const string& brand, const string& model, int yearModel)
        : brand(brand), model(model), yearModel(yearModel)
    {

    }

    void printData() const;



};

#endif // CAR_H
