#include<stdio.h>

int main(){
    // char st[34]= "yogendra";
    char s[34];
    printf("enter your name \n");
   // scanf("%s", &s);
    gets(s);
    puts(s);
    printf("your name is %s \n", s);
    
    //printf("%s \n", &st);
    
    return 0;
}