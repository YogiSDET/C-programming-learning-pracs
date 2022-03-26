#include<stdio.h>

int main(){
    char str[]= "harry";
    char *ptr= &str[0];
    while (*ptr!='\0')
    {printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}