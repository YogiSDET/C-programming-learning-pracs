#include<stdio.h>

int main (){
    int a,b,nth_term;
    a = 0 , b=1;
    nth_term = a+b; 
    int i,n;
    n = 10;
    printf("fibonacci series: %d,%d, ", a,b);
    //3rd term
    for(int i=3; i<=n;i++){
    printf("%d, ",nth_term);
        a = b;  
        b = nth_term;
        nth_term = a+b;  
    }
    return 0;
}