#include<stdio.h>

int main(){
    int i=0, sum=0;
    do
    {
        printf("the value of sum 1 to 10 is %d \n", sum);  
        i++;
        sum +=i;    
    } while (i<=10);
    
    // for (int i = 0; i <=10; i++)
    // {   sum +=i;
    // }
    // printf("The value of sum(1 to10) is %d", sum);
    return 0;
}