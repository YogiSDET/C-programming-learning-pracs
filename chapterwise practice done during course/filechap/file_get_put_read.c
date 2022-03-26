#include<stdio.h>

int main(){
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr);
    while (c!=EOF)      // EOF is end of file c will get char one by one till its equal to end
    { printf("%c", c);      // so all char type in file will be print in output
        c=fgetc(ptr);       // entire paragrgh is read by this
    }
    fclose(ptr);

    return 0;
} 