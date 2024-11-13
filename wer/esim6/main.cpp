#include "student.h"

#include <iostream>

using namespace std;

int main()
{
    Student *objStudent1=new Student;
    objStudent1->setFname("Liisa");
    objStudent1->setFname("Joki");
    objStudent1->setEmail("liisa.joki@oamk.fi");
    objStudent1->setAge(17);

    Student *objStudent2=new Student("Teppo","Testi","teppo.testi@oma.com",-24);

    objStudent1->studentInfo();
    objStudent2->studentInfo();

    delete objStudent1;
    objStudent1=nullptr;
    delete objStudent2;
    objStudent2=nullptr;

    return 0;
}
