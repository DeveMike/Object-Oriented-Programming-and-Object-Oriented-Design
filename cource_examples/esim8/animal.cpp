#include "animal.h"

int Animal::getWeight() const
{
    return weight;
}

void Animal::setWeight(int newWeight)
{
    weight = newWeight;
}

string Animal::getColor() const
{
    return color;
}

void Animal::setColor(const string &newColor)
{
    color = newColor;
}

Animal::~Animal()
{
    cout<<"Animal olio tuhottiin"<<endl;
}

void Animal::printData()
{
    cout<<"********************"<<endl;
    cout<<"Elaimen vari="<<color<<" ja paino="<<weight<<endl;
    cout<<"********************"<<endl;
}

Animal::Animal()
{
    cout<<"Animal olio luotiin"<<endl;
}

Animal::Animal(int w, string c)
{
    weight=w;
    color=c;
}
