#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include "secondclass.h"

#include <QObject>
#include <QDebug>

class FirstClass : public QObject
{
    Q_OBJECT

private:
    SecondClass *objSecondClass;
public:
    explicit FirstClass(QObject *parent = nullptr);
    ~FirstClass();

signals:

};

#endif // FIRSTCLASS_H
