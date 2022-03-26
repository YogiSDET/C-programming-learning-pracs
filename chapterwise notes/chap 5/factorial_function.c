#include<stdio.h>
int factorial(int x){
    if (x==0 || x==1)
    { return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    int y;
    y = factorial(12);
    printf("factorial of %d \n ", y);
    return 0;
}
