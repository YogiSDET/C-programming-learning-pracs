#include<stdio.h>
#include<string.h>

typedef struct emp{
    int code;
    float salary;
    char st[34];

}empp;

void xuv(empp e1){  
    printf(" %d \n", e1.code);
    printf(" %f \n", e1.salary);
    printf(" %s \n", e1.st);
}

int main(){
    empp e1;
    empp *ptr;
    ptr = & e1;
    ptr->code= 12;
    ptr->salary = 23.22;
    strcpy(ptr->st,"yogi");
    xuv(e1);
    return 0;
}