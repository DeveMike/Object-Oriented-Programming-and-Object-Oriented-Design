#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;


class Person
{
private:
    int age;
    string name;
public:
    Person();
    ~Person();
    int getAge() const;
    void setAge(int newAge);
    string getName() const;
    void setName(const string &newName);
    void personInfo();
};

#endif // PERSON_H
