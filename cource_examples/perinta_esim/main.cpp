#include <iostream>
#include "animal.h"
#include "dog.h"
#include <vector>
#include <memory> // unique_ptr
using namespace std;
int main()
{

//    Animal *objAnimal=new Animal;
//    objAnimal->callOut();
//    delete objAnimal;

    Dog *objDog=new Dog;
    objDog->callOut();
    delete objDog;

//  Jos halutaan luoda Dog olioita seuraavasti on
//  Animal luokan destruktori määritettävä virtuaaliseksi

//    Animal *objD=new Dog;
//    objD->callOut();
//    delete objD;

//        vector<unique_ptr<Animal>> objects;

//        objects.push_back(make_unique<Animal>());
//        objects.push_back(make_unique<Dog>());

//        for (int x=0; x<=1; x++) {
//            objects[x]->callOut();
//        }

//        Animal *objA=new Animal;
//        objA->callOut();
//        delete objA;

    return 0;
}
