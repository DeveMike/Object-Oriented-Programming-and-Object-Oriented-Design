#include "secondclass.h"

SecondClass::SecondClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"SecondClass olio luotiin\n";
}

SecondClass::~SecondClass()
{
    qDebug()<<"SecondClass olio tuhotiin\n";
}
