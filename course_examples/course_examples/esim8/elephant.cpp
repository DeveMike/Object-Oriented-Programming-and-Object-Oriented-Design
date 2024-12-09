#include "elephant.h"

string Elephant::getZooName() const
{
    return zooName;
}

void Elephant::setZooName(const string &newZooName)
{
    zooName = newZooName;
}

Elephant::Elephant()
{
    cout<<"Elephant luokan olio luotiin"<<endl;
}
