#include<stdio.h>

int main(){
    int a=4;
    int *b;
    b = &a;
    printf("%u \n", b);
    printf("%u \n", *b);
    return 0;
} 