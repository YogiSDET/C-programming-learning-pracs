#include<stdio.h>
int wrong_swap(int a, int b){
    int temp;
    temp =a;
    a = b;
    b = temp;

}
int swap(int *a , int *b){
    int temp;
    temp =*a;
    *a = *b;
    *b = temp;
 
}
int main(){
    int a=12,b=22;
    printf("the value of x & y is %d and %d \n ", a, b);
    // wrong_swap(12,22);
    swap(&a,&b);
    printf("the value of x & y is %d and %d \n ", a, b);
    return 0;
}
// wrong swap will won't work as value address and & operator not send to function
// defintion 