#include<stdio.h>

int sumAvg(int a, int b){
    int sum;
    sum = (a+b)/2;
    printf("sum is %d", sum);
}

int main(){
    int a=23,b=43;
    int k;
    k = sumAvg(a,b);
    return 0;
}