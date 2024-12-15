#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    ExampleClass example;
    example.startToWait();

    return a.exec();
}
