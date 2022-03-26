#include<stdio.h>
float avg(int a, int b, int c){
    float y;
    y= (a+b+c)/3;
    return y;
}
int main(){
    float x;
    x = avg(21,22,23);
    printf("avg of given no is %f \n", x);
    return 0;
}
