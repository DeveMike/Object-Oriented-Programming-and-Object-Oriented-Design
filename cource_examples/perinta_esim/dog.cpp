#include "dog.h"
using namespace std;
Dog::Dog()
{
    cout << "DOG OLIO:" << endl;
}


void Dog::callOut() {
    cout << "--Koira haukkuu!" << endl;
}

Dog::~Dog() {
    cout << "--Dog-olio tuhottu." << endl;
}
