#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal
{
private:
    string owner;
public:
    Cat();
    Cat(int, string, string);
    string getOwner() const;
    void setOwner(const string &newOwner);
    ~Cat();

    virtual void printData() override;
};

#endif // CAT_H
