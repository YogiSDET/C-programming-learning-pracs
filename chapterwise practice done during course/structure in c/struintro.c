#include<stdio.h>
struct employe
{   int code;
    char name[32];
    float salary;
};

int main(){
    struct employe e1,e2,e3;
    printf("enter a value of employe e1 code \n");
    scanf("%d", &e1.code);
    printf("enter a value of employe e1 name \n");
    scanf("%s", &e1.name);
    printf("enter a value of employe e1 salary \n");
    scanf("%f", &e1.salary);
    // printf("enter a value of employe e2 \n");
    // scanf("%d", &e2.code);
    // printf("enter a value of employe e2 \n");
    // scanf("%s", &e2.name);
    // printf("enter a value of employe e2 \n");
    // scanf("%f", &e2.salary);
    //  printf("enter a value of employe e3 \n");
    // scanf("%d", &e3.code);
    // printf("enter a value of employe e3 \n");
    // scanf("%s", &e3.name);
    // printf("enter a value of employe e3 \n");
    // scanf("%f", &e3.salary);

    printf("value enter of e1 is %d %s & %f \n", e1.code,e1.name,e1.salary);
    return 0;
}   