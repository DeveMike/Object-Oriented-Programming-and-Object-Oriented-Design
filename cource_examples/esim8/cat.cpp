#include "cat.h"

string Cat::getOwner() const
{
    return owner;
}

void Cat::setOwner(const string &newOwner)
{
    owner = newOwner;
}

Cat::~Cat()
{
    cout<<"Cat luokan olio tuhottiin"<<endl;
}

void Cat::printData()
{
    cout<<"********************"<<endl;
    cout<<"Kissan vari="<<this->getColor()<<" ja paino="<<this->getWeight()<<endl;
    cout<<"Kissa omistaja="<<owner<<endl;
    cout<<"********************"<<endl;
}

Cat::Cat()
{
    cout<<"Cat luokan olio luotiin"<<endl;
}

Cat::Cat(int w, string c, string o):Animal(w,c)
{
    this->setWeight(w);
    this->setColor(c);
    owner=o;
}
