#include<stdio.h>
    int main(){

        // int a = 10;
        // if(a==11){
        //     printf("i am 11 \n ");
        // }
        // else{
        //     printf("i am not 11 \n");
    // }

    int english, math, science;
    float total;
    printf("please enter your english marks \n");
    scanf("%d", & english);
    printf("please enter your math marks \n");
    scanf("%d", & math); 
    printf("please enter your science marks \n");
    scanf("%d", & science);
    total = (english+math+science)/3;            
    if((total<40) || english<33 || math<33 || science<33){
        printf("your total percentage is %f and you are fail \n", total );
    }
    else{
        printf("your total percentage is %f and you are pass \n", total);
    }

    // float tax, income;
    // printf("enter your income \n");
    // scanf("%f", & income);
    // if(income>=250000 && income<=500000){
    //     tax= tax + 0.05 *(income-250000); 
    // }    
    // if(income>=500000 && income<=1000000){
    //     tax= tax + 0.20 *(income-500000); 
    // }    
    // if(income>=1000000){
    //     tax= tax + 0.30 *(income-1000000); 
    // }    
    // printf("Your net income tax to be paid to end of this month is %f \n", tax);
    
    // int year;
    // printf("enter a year \n");
    // scanf("%d", & year);
    // if(year%400==0){
    //     printf("%d is a leap year \n", year);
    // }
    // else if (year%100==0){
    //     printf("%d is not a leap year \n", year);
    // }
    // else if (year%4==0){
    //     printf("%d is a leap year \n", year);
    // }
    // else{
    //     printf("%d is a not leap year \n", year);
    // }

    // int num1,num2,num3,num4;
    // printf("enter a num \n");
    // scanf("%d", & num1);
    // printf("enter a num \n");
    // scanf("%d", & num2);
    // printf("enter a num \n");
    // scanf("%d", & num3);
    // printf("enter a num \n");
    // scanf("%d", & num4);
    // if(num2>num1){
    // }
    // if(num3>num1){        
    // }
    //  if(num4>num1){
    //     printf("greater %d \n",num4);    
    // }
    // else{
    //     printf("greater %d \n",num1);
    // }
    // if(num3>num2){
        
    // }
    // if(num4>num2){
    //     printf("greater %d \n",num4);
    // }
    // else{
    //     printf("greater %d \n", num2);
    // }
    // if(num4>num3){
    //     printf("greater %d \n", num4);    
    // }
    // else{
    //     printf("greater %d \n", num3);
    // }

  
    return 0;

    }





