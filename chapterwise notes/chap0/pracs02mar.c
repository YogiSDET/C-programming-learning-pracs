#include<stdio.h>

int recursive(int a){
    int n;
    if(a==0 || a==1)
    return 1;
    else{
        n = a*recursive(a-1);
        return n;
    }
    
}
int main(){
    int a,b,c;
    a = 5;
   b= recursive(a);
   printf("factorial of %d is %d", a,b);
    return 0;
}