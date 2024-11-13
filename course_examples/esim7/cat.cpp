#include "cat.h"

string Cat::getColor() const
{
    return color;
}

void Cat::setColor(const string &newColor)
{
    color = newColor;
}

string Cat::getName() const
{
    return name;
}

void Cat::setName(const string &newName)
{
    name = newName;
}

void Cat::printData()
{
    cout<<"nimi="<<name<<" ja vari="<<color<<endl;
}

Cat::Cat()
{

}

Cat::Cat(string n, string c)
{
    name=n;
    color=c;
}
