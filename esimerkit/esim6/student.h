#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;

class Student
{
private:
    string fname;
    string lname;
    string email;
    int age;

public:
    //tyhjä konstruktori
    Student();
    //construktori joka ottaa parametrit
    Student(string, string, string, int);

    string getFname() const;
    void setFname(const string &newFname);
    string getLname() const;
    void setLname(const string &newLname);
    string getEmail() const;
    void setEmail(const string &newEmail);

    void studentInfo();
    int getAge() const;
    void setAge(int newAge);
};

#endif // STUDENT_H
