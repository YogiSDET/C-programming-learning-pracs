#include<stdio.h>
// sum of nth natural no 
// 1+2+3+4+5

int main(){
    int n=10;
    int i = 0;
    while (i<=10)
    {   int x = (n*(i+1))/2;
        i++;
        printf("nth no is %d\n", x);
    }
    
    return 0;
}
