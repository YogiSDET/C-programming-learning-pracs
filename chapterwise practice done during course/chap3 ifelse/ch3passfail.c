#include<stdio.h>

// write a program for even or odd no 
int main(){
    float a,b,c;
    float total;
    printf("enter a marks of sub a \n");
    scanf("%f", & a);
    printf("enter a marks of sub b \n");
    scanf("%f", & b);
    printf("enter a marks of sub c \n");
    scanf("%f", & c);
    total = (a+b+c)/3;
    if (total>40 && a>33 && b>33 && c>33)
    {   printf("you are pass %f %f %f is %f", total, a,b,c);
    }
    else{
        printf("you are fail %f ", total);
    }
    return 0; 
};
