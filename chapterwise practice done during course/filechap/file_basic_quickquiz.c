#include<stdio.h>

int main(){
    FILE *ptr;
    int num1,num2;
    ptr = fopen("Harry1.txt", "r");  //remove 1 from file name to get what is inside file
    if (ptr==NULL)
    {   printf("FILE DOES EXIST \n");
    }
    else{
    
    fscanf(ptr, "%d", & num1);
    fscanf(ptr, "%d", & num2);
    printf("The value of num1 is %d \n", num1);
    printf("The value of num2 is %d \n", num2);
    fclose(ptr);
    }

    return 0;
}