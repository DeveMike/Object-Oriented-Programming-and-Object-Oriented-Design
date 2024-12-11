#include "cat.h"
#include "elephant.h"

#include <iostream>

using namespace std;

int main()
{
    Cat objCat;
    Elephant objElephant;

    objCat.setOwner("Liisa");
    objCat.setColor("oranssi");
    objCat.setWeight(4);

    objElephant.setZooName("Korkeasaari");
    objElephant.setColor("harmaa");
    objElephant.setWeight(3500);

    Cat objCat2=Cat(5,"musta","Teppo");

    cout<<"Eka kissan omistaja="<<objCat.getOwner()<<endl;
    cout<<"Toka kissan omistaja="<<objCat2.getOwner()<<endl;

    objCat.printData();
    objCat2.printData();
    objElephant.printData();
    return 0;
}
