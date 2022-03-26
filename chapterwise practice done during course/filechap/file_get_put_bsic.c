#include<stdio.h>
// only use for character by character
int main(){
    FILE *ptr;
    ptr = fopen("getdemo.txt", "r");
    //char c = fgetc(ptr);   // this will give 1 char as output in txt file--> when print c
    printf("The value of my character is %c \n", fgetc(ptr));
    printf("The value of my character is %c \n", fgetc(ptr));
    printf("The value of my character is %c \n", fgetc(ptr));
    printf("The value of my character is %c \n", fgetc(ptr));
    printf("The value of my character is %c \n", fgetc(ptr));

    ptr = fopen("putdemo.txt", "w");
    putc('c', ptr);
    putc('y', ptr);
    putc('c', ptr);
    putc('y', ptr);
    fclose(ptr);

    return 0;
}