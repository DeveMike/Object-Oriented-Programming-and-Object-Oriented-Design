#include "animal.h"
#include "dog.h"

int main()
{
    Animal *objectAnimal = new Animal;
    objectAnimal->callOut();
    delete objectAnimal;
    objectAnimal = nullptr;

    Dog *objectDog = new Dog;
    objectDog->callOut();
    delete objectDog;
    objectDog = nullptr;



    return 0;
}
