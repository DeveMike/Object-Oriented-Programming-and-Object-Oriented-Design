
int factorial(int n)
{
    if(n<0){
        return -1;
    }
    else{
        int result=1;
        for(int row=1; row<=n; row++){
            result= row*result;
        }
        return result;
    }
}

int coefficient(int n, int k)
{
    if(k>n || k<0){
        return 0;
    }
    else{
        int result;
        result=factorial(n) / (factorial(k) * factorial(n-k));
        return result;
    }
}
