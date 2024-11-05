#include <stdexcept>

int factorial(int n)
{
    if(n<0){
        //jos n<0 nostetaan runtime error
        throw std::runtime_error("n ei saa olla negatiivinen.");
    }
    else{
        int result=1;
        for(int row=1; row<=n; row++){
            result= row*result;
        }
        return result;
    }
}
