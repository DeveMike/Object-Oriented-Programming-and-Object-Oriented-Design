#include "Student.h"

#include <string>
#include <iostream>


using namespace std;


string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

Student::Student() {
    cout<<"------------"<<endl;
    cout<<"Olio luotiin"<<endl;
    cout<<"------------"<<endl;


}

Student::~Student(){
    cout<<"------------"<<endl;
    cout<<"Olio tuhottiin"<<endl;

}
