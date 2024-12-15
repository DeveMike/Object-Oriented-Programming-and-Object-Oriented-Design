#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    MyClass obj;
    obj.raiseMySignal();

    return a.exec();
}
