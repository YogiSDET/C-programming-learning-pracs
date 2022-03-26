#include<stdio.h>
#include<string.h>

typedef struct employe
{   int code;
    float salary;
    char name[34];
}emp;                   // added typedef and emp to make data type of emp;                
void show( emp emp1){
    printf("the code of employee is: %d \n", emp1.code);
     printf("the code of employee is: %f \n", emp1.salary);
      printf("the code of employee is: %s \n", emp1.name);
      emp1.code=34;
}

int main(){
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 121;
    ptr->salary =32.22;
    strcpy(ptr->name,"yogi");
    show(e1);
    printf("the code of employee is : %d\n", e1.code);
    return 0;
}         // custom datatype of emp is made by help of typedef