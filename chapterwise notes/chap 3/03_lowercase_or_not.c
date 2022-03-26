#include<stdio.h>

int main(){
    // 97-122 = a-z ASCII Values
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch<=122 && ch>=97){
        printf("It is lowercase");
    }
    else{
        printf("It is not lowercase");
    }
    return 0;
}
// ch<122 && ch>97 this will include 97 to 122