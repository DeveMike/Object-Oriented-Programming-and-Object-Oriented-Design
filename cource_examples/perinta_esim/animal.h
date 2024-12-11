#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>

class Animal
{
public:
    Animal();
    virtual void callOut()=0;
    virtual ~Animal();
};

#endif // ANIMAL_H
