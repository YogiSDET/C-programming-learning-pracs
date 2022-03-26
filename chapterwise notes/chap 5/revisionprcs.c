#include<stdio.h>
int factorial(int x){
    if(x==1)
    return 1;
    else{
        x = factorial(x-1)*x;
    }
}
int main(){
    int a =5;
    int x;
    x = factorial(a);
    printf("%d", x);
    return 0;
}