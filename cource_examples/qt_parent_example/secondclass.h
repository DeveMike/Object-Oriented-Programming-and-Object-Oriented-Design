#ifndef SECONDCLASS_H
#define SECONDCLASS_H

#include <QObject>
#include <QDebug>

class SecondClass : public QObject
{
    Q_OBJECT
public:
    explicit SecondClass(QObject *parent = nullptr);
    ~SecondClass();

signals:

};

#endif // SECONDCLASS_H
