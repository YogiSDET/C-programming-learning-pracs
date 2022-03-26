#include<stdio.h>
int vari(int a){
    int *ptr;
    ptr = &a;
    printf("add of a is %u \n", ptr);
}

int main(){
    int i = 43;
    int *ptr;
    ptr = &i;
    printf("add of i is %u \n", ptr);
    vari(i);
    int c = vari(i);
    return 0;
}