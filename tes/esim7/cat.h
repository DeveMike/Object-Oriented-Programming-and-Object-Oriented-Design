#ifndef CAT_H
#define CAT_H
#include <iostream>
using namespace std;
class Cat
{
private:
    string color;
    string name;
public:
    Cat();
    Cat(string, string);
    string getColor() const;
    void setColor(const string &newColor);
    string getName() const;
    void setName(const string &newName);
    void printData();
};

#endif // CAT_H
