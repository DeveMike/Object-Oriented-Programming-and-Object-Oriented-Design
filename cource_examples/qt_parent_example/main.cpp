#include "firstclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    FirstClass *objFirst=new FirstClass;
    delete objFirst;
    objFirst=nullptr;
    return a.exec();
}
