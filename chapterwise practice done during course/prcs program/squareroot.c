/* #include<stdio.h>
// program for square no
int main(){
    int a,b;
    printf("enter a number \n");
    scanf("%d", &a);
    b= a*a;
    printf("square root of %d is : %d", a,b); // multicomment shortcut is 
    // shift+alt+A 
    return 0;
} */

// square root of any no program in c, sqrt is function in c library use

/* #include<stdio.h>
#include<math.h>

int main(){
    int num;
    double result;
    printf("enter a number \n");
    scanf("%d", &num);
    result = sqrt(num);
    printf("square root of %d is : %.2lf", num, result);
    return 0;
} */

// simple interest program
/* #include<stdio.h>

int main(){
    float r,p,SI, t;
    printf("enter a value of amount principal & interst \n");
    scanf("%f %f %f", &r, & p, & t);
    SI = (r*p*t)/100;
    printf("simple interst : %.2f", SI);
    return 0;
} */

// compund interest formula - a= p(1+r/n)^n*t

/* For this purpose the formula of compound interest,
 including principal sum, is:
A = P*(1 + r/n)^(n*t)
Where the meaning of these are:
A = the future value of the investment/loan, including interest
P = the principal investment amount (the initial deposit or loan amount)
r = the annual interest rate (decimal)
n = the number of times that interest is compounded per unit t 
mostly it is 12 month
t = the time the money is invested or borrowed for */

/* #include<stdio.h>
#include<math.h>
int main()
{

   // declare variables
   double princ, amount;
   float rate, time;
   int n;

   // take inputs
   printf("Enter principal amount: ");
   scanf("%lf",&princ);
   printf("Enter rate, time and number of times: ");
   scanf("%f %f %d",&rate, &time, &n);

   // calculate compound interest value
   amount = princ*pow( (1+(rate/n)), (n*time));

   // display result
   printf("Amount=%.2lf",amount);

   return 0;
} */

// distance between two points
#include<stdio.h>
#include<math.h>
int main()
{
   int x1, y1, x2, y2, x, y, distance;

   // take first point's coordinates
   printf("Enter coordinates of first point: ");
   scanf("%d %d",&x1, &y1);

   // take second point's coordinates
   printf("Enter coordinates of second point: ");
   scanf("%d %d",&x2, &y2);

   x = (x2-x1);
   y = (y2-y1);

   distance = sqrt(x*x + y*y);

   // display result
   printf("Distance = %d", distance);

   return 0;
}
// swapping program in C language
#include<stdio.h>
int main()
{
    int a=10, b=20, c;
    c = a;
    a = b;
    b = c;
    printf("a=%d \t b=%d\n",a,b);
    return 0;
}