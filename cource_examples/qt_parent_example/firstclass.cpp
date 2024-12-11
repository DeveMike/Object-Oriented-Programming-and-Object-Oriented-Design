#include "firstclass.h"

FirstClass::FirstClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"FirstClass olio luotiin\n";
    //luodan SecondClass luoka olio objSecondClass
    //asetetaan nykyinen olio objSecondClass olion parentiksi
    //objSecondClass tuhotuu, kun nykyinen olio tuhoutuu
    objSecondClass=new SecondClass(this);
}

FirstClass::~FirstClass()
{
    qDebug()<<"FirstClass olio tuhottiin\n";
}
