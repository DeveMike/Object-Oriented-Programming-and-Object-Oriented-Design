#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    void callOut() const override;
};

#endif // DOG_H
