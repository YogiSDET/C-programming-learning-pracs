#include<stdio.h>

int main(){     

    // int a,b;
    // printf("enter a number \n");
    // scanf("%d",&a);

    // if(a%2==0){
    //     printf("%d is even \n", a);
    // }    
    // else{
    //     printf("%d is odd \n", a);
    // }

    // int age;
    // printf("enter your age \n");
    // scanf("%d", & age);

    // if(age>=90){
    //     printf("you are above 90, you cannot drive \n");
    // }
    // else{
    //     printf("you can drive \n");
    // }
    // if(age==50){
    //     printf("half century \n");
    // }
    // double equal sign is use for equal to 

// declaration instruction

    // int i=12 , j=23, a=34;
    // int j1 = i + j - a;
    // printf("%d", j1);

    // if else condition and "and " operation condition 
    // int age;
    // printf("enter your age \n");
    // scanf("%d", & age);
    // if (age<=70 && age>=18){
    //     printf("you are above 18 and below 70 you can drive \n");
    // }    
    // else{
    //     printf("you cannot drive \n");  
    // }

        //vip pass alocation in logic operators and if conditon
        // || double line is or operators   
    int age;
    int vippass = 0;
    vippass =1;
    printf("enter your age \n");
    scanf("%d", & age);
    if ((age<=70 && age>=18) || vippass == 1)
    {
        printf("you are above 18 and below 70 you can drive \n");
    }    
    else{
        printf("you cannot drive \n");  
    }
    

return 0;   
}