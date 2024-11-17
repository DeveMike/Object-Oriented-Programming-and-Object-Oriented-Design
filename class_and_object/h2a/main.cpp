#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

#include <memory>


#include <iostream>
using namespace std;

int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2020);

    myCar.printData();

    Rectangle* rect = new Rectangle();
    rect->setWidth(5.0);
    rect->setHeight(3.0);
    cout << "Pinta-ala: " << rect->getArea() << endl;
    cout << "Ympärysmitta: " << rect->getCircum() << endl;
    delete rect;
    rect = nullptr;


    unique_ptr<Student> objectStudent=make_unique<Student>();
    objectStudent-> setName("Opiskelijan Nimi");
    objectStudent->setStudentNumber(102);
    objectStudent->setAverage(4.3);

    cout<<"Opiskelijan tiedot:"<<endl;
    cout<<"Nimi: "<< objectStudent->getName()<<endl;
    cout<<"Opiskelijanumero: "<< objectStudent->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<< objectStudent->getAverage()<<endl;


    return 0;
}
