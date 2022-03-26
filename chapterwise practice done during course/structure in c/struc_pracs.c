#include<stdio.h>
#include<string.h>
    struct employee
    { int id ;
        float salary;
        char name [10];
    };
    int main(){
       struct employee e1;
       struct employee *ptr;
    ptr = &e1;
    (*ptr).id = 100;
    // ptr->id = 100; // one more way to right *ptr 
    printf("%d \n", e1.id);
    return 0;
       
    }    
