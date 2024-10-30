#include "myfunctions.h"
#include <iostream>


using namespace std;
void fun1();
int main()
{
    cout << "Hello World!" << endl;
    fun1();
    fun2();
    fun3("Teppo Testi");
    return 0;
}

void fun1(){
    cout << "Olen funktio1"<<endl;
}
