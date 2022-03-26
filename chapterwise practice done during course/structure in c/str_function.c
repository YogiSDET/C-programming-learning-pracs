#include<stdio.h>
#include<string.h>

struct employe
{   int code;
    float salary;
    char name[34];
};
void show( struct employe emp){
    printf("the code of employee is: %d \n", emp.code);
     printf("the code of employee is: %f \n", emp.salary);
      printf("the code of employee is: %s \n", emp.name);
      emp.code=34;
}

int main(){
    struct employe e1;
    struct employe *ptr;
    ptr = &e1;
    ptr->code = 121;
    ptr->salary =32.22;
    strcpy(ptr->name,"yogi");
    show(e1);
    printf("the code of employee is : %d\n", e1.code);
    return 0;
}