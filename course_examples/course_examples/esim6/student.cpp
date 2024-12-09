#include "student.h"

string Student::getFname() const
{
    return fname;
}

void Student::setFname(const string &newFname)
{
    fname = newFname;
}

string Student::getLname() const
{
    return lname;
}

void Student::setLname(const string &newLname)
{
    lname = newLname;
}

string Student::getEmail() const
{
    return email;
}

void Student::setEmail(const string &newEmail)
{
    email = newEmail;
}

void Student::studentInfo()
{
    cout<<"OPISKELIJAN TIEDOT"<<endl;
    cout<<"NIMI="<<fname<<" "<<lname<<endl;
    cout<<"EMAIL="<<email<<endl;
    if(age>0){
        cout<<"IKA="<<age<<endl;
    }
    cout<<"--------------------"<<endl;
}

int Student::getAge() const
{
    return age;
}

void Student::setAge(int newAge)
{
    if(age<=0){
        age=0;
    }
    age = newAge;
}

Student::Student()
{

}

Student::Student(string fn, string ln, string em, int a)
{
    fname=fn;
    // tai setFname(fn);
    lname=ln;
    email=em;
    setAge(a);
}
