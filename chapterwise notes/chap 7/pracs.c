#include<stdio.h>

int main(){
    int mar[5];
    int *ptr;
    ptr = &mar[0];
    for(int i=0; i<5;i++){
        printf("enter a value of %d \n", i+1);
        scanf("%d", ptr);
        ptr++  ;  
    }
    for(int i=0; i<5;i++){
        printf("enter a value of %d is %d\n", i+1, *ptr );    
    }
    return 0;
}