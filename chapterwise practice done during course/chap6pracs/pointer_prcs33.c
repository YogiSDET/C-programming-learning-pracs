#include<stdio.h>
int raw(int *a){
    *a*=10;
    return*a;
    // printf("the add of variable a is %u \n", a);
    // printf("the add of variable a is %u \n", &a);
}

int main(){
    int i = 100;
    printf("value of i is %u \n", i);
    i = raw(&i);
    printf("value of i by using function to get 10 tym %u \n ", i);
    return 0;
}

