#include<stdio.h>

int main(){
    int skip=5, i=1;
    while(i<10){
        i++;
        if(i==skip){
            break;
        }
        else{
            printf("%d\n", i);
        }
    }
    return 0;
}