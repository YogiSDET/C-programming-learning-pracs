#include<stdio.h>

//Write a program to check whether a number is divisible  97 or not.
int main(){
    int a;
    printf("enter a number");
    scanf("%d", &a);
    // int b;
    // b = (a%97==0);
    // printf("if reminder is zero than divisible by 97 %d",b);
    if(a%97==0){
        printf("given no %d is divisible by 97",a);
    }
    else{
        printf("%d no is not divisible by 97", a);
    }
    return 0;
};
 