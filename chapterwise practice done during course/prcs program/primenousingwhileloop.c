#include<stdio.h>

int main(){
    int n , prime = 1;
     n=2;
    int i=2;
    while(i<n)
    
    { if(n%i==0){
        prime = 0;
        break;     
    } i++;
    }
    if(prime==0){
        printf("not a prime no");
    }
    else{
        printf("prime no");
    }
    return 0;
}