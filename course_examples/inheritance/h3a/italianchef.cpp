#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(const string &name) : Chef(name) {  // Kutsutaan Chef-luokan konstruktoria
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << name << " destruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "ItalianChef " << name << " makes pasta" << endl;
}

string ItalianChef::getName() const {
    return name;
}
