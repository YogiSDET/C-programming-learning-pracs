#include<stdio.h>

int main(){
    char operation;
    double n1, n2;
    printf("Enter a operator(+,-,*,/): ");
    scanf("%c", &operation);
     printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);    // lf is used for double keyword type float 
    switch (operation)
    {
    case '*':
        printf("%.1lf * %.1lf = %.1lf \n", n1, n2, n1*n2);
        break;
    case '+':
         printf("%.1lf + %.1lf = %.1lf \n", n1, n2, n1+n2);
        break;
    case '-':    
         printf("%.1lf - %.1lf = %.1lf \n", n1, n2, n1-n2);
        break;
    case '/':
         printf("%.1lf / %.1lf = %.1lf \n", n1, n2, n1/n2);
        break;
    default:
        break;
    }
    return 0;
};