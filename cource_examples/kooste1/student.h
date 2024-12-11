#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;

class Student
{
private:
    string name;
public:
    Student();
    ~Student();
    Student(string);
    void getData();
};

#endif // STUDENT_H
