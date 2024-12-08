#include "AssosiationA.h"

AssosiationA::AssosiationA(ClassB value) : objectB(value) {}

string AssosiationA::getBinfo() {
    return objectB.getInfo();
}

void AssosiationA::setBinfo(string value) {
    objectB.setInfo(value);
}
