#include<stdio.h>

int strlen(char*st){
    char *ptr=st;
    int len=0;
    while (*ptr!='\0')
    {  len++;
        ptr++;
    }
    return len;   
}
int main(){
        char c[]="Harry";
        int l = strlen(c);
        printf("the length of this string is %d \n",l);
        return 0;    
}