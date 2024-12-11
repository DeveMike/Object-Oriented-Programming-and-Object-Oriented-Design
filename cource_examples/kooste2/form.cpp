#include "form.h"

string Form::getLabel() const
{
    return label;
}

void Form::setLabel(const string &newLabel)
{
    label = newLabel;
}

Form::Form()
{

}
