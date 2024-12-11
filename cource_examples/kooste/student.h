#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
public:
    Student();
    string getName() const;
    void setName(const string &newName);
};

#endif // STUDENT_H
