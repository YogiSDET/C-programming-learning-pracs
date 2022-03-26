#include<stdio.h>

// Calculate income tax paid by an employee to the government as per the slabs
//  mentioned below:
// Income Slab	Tax
// 2.5L-5.0L	5%
// 5.0L-10.0L	20%
// Above 10.0L	30%

int main(){
    float tax;
    int income;
    float a,b,c;
    printf("enter your income");
    scanf("%d", &income);
    if(income<250000){
        printf("income less than 2.5 lakh no tax");
    }
    if(income>250000 && income<500000){
        a = tax + 0.05*(income-250000);
    printf("tax is %f", a);}
    else if(income>500000 && income<1000000){
        a = tax + 0.20*(income-500000);
    }
    

    return 0;
};