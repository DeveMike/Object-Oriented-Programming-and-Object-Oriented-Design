#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

int main() {
    Chef myChef("Gordon Ramsay");
    myChef.makeSalad();
    myChef.makeSoup();

    ItalianChef newChef("Anthony Bourdain");
    newChef.makeSalad();
    newChef.makeSoup();
    newChef.makePasta();

    cout << "Name of the Italian Chef is " << newChef.getName() << endl;

    return 0;
}
