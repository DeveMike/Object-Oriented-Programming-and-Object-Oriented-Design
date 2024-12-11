#include "classroom.h"

ClassRoom::ClassRoom()
{
    objStudent1=new Student();
    objStudent1->setName("Ville");
}

void ClassRoom::printData()
{
    cout<<objStudent1->getName();
}

ClassRoom::~ClassRoom()
{
    delete objStudent1;
    objStudent1=nullptr;
}


