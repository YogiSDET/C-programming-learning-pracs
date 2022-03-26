#inc lude <stdio.h>
#include <string.h>


struct employee
{
    int id;
    float salary;
    char name[20];
};

int main()
{   struct employee facebook[100];

    facebook[0].id =100;
    facebook[0].salary = 23.2;
    strcpy(facebook[0].name,"yogendra");

    facebook[1].id =100;
    facebook[1].salary = 23.2;
    strcpy(facebook[1].name,"yogendra");
    
    // struct employee e1;
    // printf("enter employee e1 data \n");
    // scanf("%d", &e1.id );
    //  printf("enter employee e1 data \n");
    // scanf("%f", &e1.salary );
    //  printf("enter employee e1 data \n");
    // scanf(" %s",  e1.name );

 
    // printf("%s ", e1.name);
    // printf("%f", e1.salary);
    // printf("%d", e1.id);
    
    return 0;
}  