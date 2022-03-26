//using while loop sum of nth no is ;
#include<stdio.h>
// runs in linear time occupied more space and make alog complex in backend 
// occupied more memory in data 
int sum(int i, int n){
    int k =0;
    while(i<=n){   
      k +=i;
     i++; 
    }
    printf("sum of nth natural %d no is:%d\n",n,k);
}
// runs in constant time // one liner best low space latency is low
int sum_c(int n){
    int a;
    a= (n*n+n)/2;
    return a;
}
int main(){
    int n,b,a;
    a = sum(0,12);
    b = sum_c(12);
    printf("sum of nth is %d", b);
    return 0;
}
