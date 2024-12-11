#include "loginform.h"

string LoginForm::getLabelLogin() const
{
    return labelLogin;
}

void LoginForm::initializeForm()
{
    objF.setLabel("Form label");
    cout<<objF.getLabel()<<endl;
}

void LoginForm::setLabelLogin(const string &newLabelLogin)
{
    labelLogin = newLabelLogin;
}

LoginForm::LoginForm()
{

}
