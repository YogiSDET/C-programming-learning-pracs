#include<stdio.h>

int main(){
    int no;
    int b=2; int prime=1;
    printf("enter a no \n");
    scanf("%d", & no);
    while (no>b)
    {   if(no%b==0){
    prime =0;
    break;
    }        
    no++;
    }
    if(prime==0){
        printf("this is not prime no");}
    else{
        printf("this is prime no");
    }
    return 0;
}