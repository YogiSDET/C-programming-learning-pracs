#include<stdio.h>

int main(){
    int a =32;
    int *ptr =&a;
    printf("%u is \n", ptr);
    ptr = ptr+1;    // it will add 4 bytes to add
    ptr = ptr+2;    // it will add 8 bytes to add
    // ptr++;
    // ptr++;
    // ptr++;  // adding 4 in address
    // ptr--; // sub 4 from address
     printf("%u is \n", ptr);
    // char c = 'd';
    // char *ptr = &c;
    // ptr = ptr+1;   // for char it will give 1 increase in address

    return 0;
}