#include<stdio.h>

int main(){
    int i =0;
    while (i<10)
    { i++;
    printf("value of i is %d \n", i); 
    if (i==5)
    {   //break;
        continue;
    }
    printf("value of y is %d \n", i);
    }
    
    return 0;
}