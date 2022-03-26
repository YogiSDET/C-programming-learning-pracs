#include<stdio.h>

int main(){
    int a;
    printf("enter a number for table \n");
    scanf("%d", &a);
    for (int i = 12; i; i--)
    {   printf("%dX%d =%d \n", a,i, a*i);
    }
    int b;   
     printf("enter a number for table \n");
    scanf("%d", &b);  
    
    printf("enter a number for table \n");
    scanf("%d", &a);
    for (int i = 0; i<=12; i++)
    {   printf("%dX%d =%d \n", b,i, b*i);
    }   
    return 0;
}