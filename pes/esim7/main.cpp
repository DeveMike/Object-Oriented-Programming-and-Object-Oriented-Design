#include "cat.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<Cat> catList;
    //luodaan Cat-luokan olioita
    Cat objCat_1=Cat("Karvinen","oranssi");
    Cat objCat_2=Cat("Monni","musta");
    Cat objCat_3=Cat("Miuku","valkoinen");

    //lisätään oliot listaan(vektoriin)
    catList.push_back(objCat_1);
    catList.push_back(objCat_2);
    catList.push_back(objCat_3);

    //tulostetaan listan ensimmäisen kissan tiedot
    catList[0].printData();
    //tulostetaan kaikkien kissojen tiedot
    cout<<"Kaikki kissat"<<endl;
    for(int x=0; x<=2; x++){
        catList[x].printData();
    }
    //for-looppi, jos ei tiedetä alkioiden määrää
    cout<<"VERSIO2"<<endl;
    for(const Cat& cat: catList){
        cout<<"nimi="<<cat.getName()<<" vari="<<cat.getColor()<<endl;
    }

    return 0;
}
