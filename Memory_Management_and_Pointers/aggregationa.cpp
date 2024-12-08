#include "AggregationA.h"

AggregationA::AggregationA(ClassB& value) : refB(value) {}

string AggregationA::getBinfo() {
    return refB.getInfo();
}

void AggregationA::setBinfo(string value) {
    refB.setInfo(value);
}
