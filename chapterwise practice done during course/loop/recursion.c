#include<stdio.h>
int factorial(int x);

int main(){
    int a = factorial(12);
    printf("value of factorial a is %d ", a );
    
}

int factorial(int x){
    printf("calling factorial %d \n", x);
    if (x==0 || x==1)
    {   return 1;
    }
    // if(0){
    // }
    else{
        return x*factorial(x-1);
    }
}