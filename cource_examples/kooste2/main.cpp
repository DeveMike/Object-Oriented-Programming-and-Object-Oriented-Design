#include "loginform.h"

#include <iostream>

using namespace std;
/*
 * Esimerkissä LoginForm luokka sisältää Form luokan olion.
 * Kyseessä on siis kooste.
 * Tälläista tarvitaan usein, kun luodaan graafisia sovelluksia,
 * joissa jostakin Formista avataan uusi Form.
*/
int main()
{
    LoginForm objLoginForm;
    objLoginForm.setLabelLogin("Login Label");
    cout<<objLoginForm.getLabelLogin()<<endl;
    objLoginForm.initializeForm();
    return 0;
}
