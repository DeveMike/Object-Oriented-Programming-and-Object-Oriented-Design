#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>
using namespace std;

class MyClass : public QObject {
    Q_OBJECT

public:
    MyClass(QObject* parent = nullptr);

    void raiseMySignal();

signals:
    void mySignal();

public slots:
    void mySlot();
};

#endif // MYCLASS_H
