#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
#include "ClassB.h"

class AssosiationA {
private:
    ClassB objectB; // Assosiaatio käyttää kopioitua olio-instanssia
public:
    AssosiationA(ClassB value);
    string getBinfo();
    void setBinfo(string value);
};

#endif
