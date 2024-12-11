#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "student.h"


class ClassRoom
{
private:
    Student *objStudent1;
public:
    ClassRoom();
    void printData();
    ~ClassRoom();

};

#endif // CLASSROOM_H
