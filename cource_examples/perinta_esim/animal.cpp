#include "animal.h"
using namespace std;
Animal::Animal()
{
    cout << "ANIMAL OLIO:" << endl;
}
void Animal::callOut() {
    cout << "--Elain aantelee." << endl;
}

Animal::~Animal()
{
    cout << "--Animal-olio tuhottu." << endl<<endl;
}

