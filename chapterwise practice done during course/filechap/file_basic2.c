#include<stdio.h>

int main(){
    FILE *ptr;
    int num1,num2;
    ptr = fopen("Harry.txt", "r");
    fscanf(ptr, "%d", & num1);
    fscanf(ptr, "%d", & num2);
    printf("The value of num1 is %d \n", num1);
    printf("The value of num2 is %d \n", num2);
    fclose(ptr);
    return 0;
}