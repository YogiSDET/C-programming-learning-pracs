#include<stdio.h>

int main(){
    int age;
    int vipPass = 0;
    vipPass = 1;
// here vipPass act as true condition 1 is true and non zero value 
// where as 0 act as zero
    printf("Enter your age\n");
    scanf("%d", &age); 

    // if (age <= 70 && age>=18)
    if ((age <= 70 && age>=18) || (vipPass==1))
    {
        printf("You are above 18 and below 70, you can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }
   
    return 0;
}