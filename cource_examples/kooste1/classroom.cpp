#include "classroom.h"

ClassRoom::ClassRoom()
{
    objStudent1=Student("Teppo Testi");
    objStudent2=Student("Liisa Testi");
    objStudent3=Student("Aino Joki");
    objStudent4=new Student("Timo Virta");

}

ClassRoom::~ClassRoom()
{
    delete objStudent4;
    objStudent4=nullptr;
}

void ClassRoom::printData()
{
    objStudent1.getData();
    objStudent2.getData();
    objStudent3.getData();

    objStudent4->getData();

}
