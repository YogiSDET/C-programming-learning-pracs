#include<stdio.h>

int main(){
    FILE *ptr; // *ptr you can use any syntax fptr, str
    int number;
    number=34l;
    //ptr = fopen("generated.txt", "w");
    fprintf(ptr,"The number is %d \n", number);
    fclose(ptr);   // fprintf will paste 341 in new generated. txt file 

    return 0;
}