// sum of nth natural no using recursion 
#include<stdio.h>
int sum(int n){
    int a;
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    a = n+sum(n-1);
    return a;
}
int main(){
    int a,b;
    a = 10;
    b = sum(a);
    printf("sum of nth natural no is %d", b);
    return 0;
}