#include<stdio.h>

int main(){
    int a=34;
    int *ptr;
    ptr = &a;
    printf("add of a is %u\n", ptr);
    printf("add of a is %u \n",&a);
    printf("add of ptr is %u\n", &ptr);
    printf("value of ptr is %u \n", *(&ptr));  // this will give add of a because 
    // we store add in ptr of a ;
    return 0;
}
