#ifndef FORM_H
#define FORM_H
#include<iostream>
using namespace std;
class Form
{
private:
    string label;
public:
    Form();
    string getLabel() const;
    void setLabel(const string &newLabel);
};

#endif // FORM_H
