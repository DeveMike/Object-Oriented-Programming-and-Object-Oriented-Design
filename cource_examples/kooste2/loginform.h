#ifndef LOGINFORM_H
#define LOGINFORM_H

#include "form.h"



class LoginForm
{
    // Form luokan olio
    Form objF;
    string labelLogin;
public:
    LoginForm();
    string getLabelLogin() const;
    void initializeForm();
    void setLabelLogin(const string &newLabelLogin);
};

#endif // LOGINFORM_H
