# include<stdio.h>
# include<math.h>

int main(){

    // // int a =4; type of declaration instruction
    // int a = 4, b,c;
    // b =c = a;
    // printf("the value of a is %d \n", a);
    // printf("the value of b is %d \n", b);
    // printf("the value of c is %d \n", c);

    // float a =4;
    // float b = a + 4.3;
    // printf("The value of c is %f \n", b);

    int a = 3;
    int b = 4;
    int c = b*a;
    printf("vale of c is %d \n", c);
    printf("the value of a +b is %d \n", a + b);
    printf("the value of a -b is %d \n", a -b);
    printf("the value of a *b is %d \n", a * b);
    printf("the value of a /b is %d \n", a / b);

    int z;
    // z = b*a; legal
    // b*a = z; illegal 
    printf("the value of z is %d \n", z);

    printf("5 divided by 2 leaves a reminder of %d \n", 5%2);
    printf("-5 divided by 2 leaves a reminder of %d \n", -5%2);
    printf("5 divided by -2 leaves a reminder of %d \n", 5%-2);

    // no operator is assumed to be present
    // printf("the value of 4*5 is %d\n", (4)(5)); will not give any value
    printf("the value of 4*5 is %d \n", 4*5);

    // there is no operator to perform exponentiation in c means 4 power 5
    // printf("the value of 4^5 is %d \n", 4^5); will not produces any ans
    // ^ this is bitwiser operators 
    printf("the value of 4 to the power of 5 is %f\n", pow(2,5));

    printf("The value of 6+5 is %d \n", 6+5);
    printf("The value of 6+5.6 is %f \n", 6+5.6);
    printf("The value of 6.1+5.6 is %f \n", 6.1+5.6);
    printf("The value of 3.0/9 is %f \n", 3.0/9);
    return 0;
}
