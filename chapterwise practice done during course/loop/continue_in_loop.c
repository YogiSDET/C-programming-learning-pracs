#include<stdio.h>

int main(){
    // note not equal to 6!=6 means else will print i equal 6 
    int skip=6, i=0;
    while(i<10){
        i++;
        // printf("%d \n",i);
        if(i!=6){
            continue;
        }
        else{
            printf("%d\n", i); // 6 output
        }
    }
    return 0;
}