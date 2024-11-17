#include "Rectangle.h"

#include <iostream>
using namespace std;


double Rectangle::getArea() const
{
    return width * height;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getCircum() const
{
    return 2 * (width + height);
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

Rectangle::Rectangle() {
    cout<<"Olio luotiin"<<endl;
    cout<<"Suorakulmion pinta-ala ja ympärysmitta:"<<endl;
    cout<<"--------------------------------------"<<endl;

}

Rectangle::~Rectangle()
{
    cout<<"--------------------------------------"<<endl;
    cout<<"Olio tuhottiin"<<endl;

}
