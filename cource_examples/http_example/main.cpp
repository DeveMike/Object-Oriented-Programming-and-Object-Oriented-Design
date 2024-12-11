#include "myhttp.h"

#include <QCoreApplication>
#include<iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyHttp obj;
    int x;
    std::cout<<"Anna ID\n";
    std::cin >> x;
    obj.getUsers(x);
    return a.exec();
}
