#include<stdio.h>
int occur(char st[], char c){
    char *ptr =st;
    int count =0;
    while (*ptr!='\0')
    { if (*ptr==c)
    {   count++;
    }
    ptr++; 
    }
    return count;
}
int main(){
    char yb[]= "yogendra";
    int a=occur(yb, 'y');
    printf("occur=%d", a);
    return 0;
}
