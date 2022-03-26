// first of all need to demostrate real and complex no value and display using function
// 
#include<stdio.h>

typedef struct complex{
  int real;   // int real value
  int complex;  // int complex value
}cmp;

void display(cmp c){
    printf("the value of real part is %d \n", c.real);  //struct complex 'c' print real
    printf("the value of complex part is %d \n", c.complex); 
}  // struct complex c will print complex int

int main(){ 
    cmp c1[5];              // struct contain array 5 no
    for (int i = 0; i <5; i++)      // for loop where 1 to 5 scanf real value 
    { printf("enter a real no %d \n", i+1);
        scanf("%d", & c1[i].real);
    }
     for (int i = 0; i <5; i++)     // scanf complex value using struct array loop    
    { printf("enter a complex no %d \n", i+1);
        scanf("%d", & c1[i].complex);
    }    
    for (int i = 0; i <5; i++)
    { display(c1[i]);       // display function using struct and arry will return real&com
    } 
    return 0;
}
