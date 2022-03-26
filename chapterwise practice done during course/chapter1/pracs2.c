/* #include<stdio.h>    
void printFibonacci(int n){    
    static int a=0,b=1,c;   
    printf("calling fibonacci(%d) \n",n); 
    if(n>0){    
        c = a + b;    
        a = b;    
        b = c;    
        printf("%d ",c);    
        printFibonacci(n-1);    
    }    
}        
int main(){    
    int z;    
    printf("Enter the number of elements: ");    
    scanf("%d",&z);    
    printf("Fibonacci Series: %d %d ",0,1);    
    printFibonacci(z-2);   //n-2 because 2 numbers are already printed    
  return 0;  
 }
 */

#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
/* 
// recursion problem so need to call function itself
#include<stdio.h>
int fib(int n){
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2);    
}
int main(){
    int a;
    a = 9;
    int z = fib(a);
    printf("fibonacci of %d is %d", a,z);
    return 0;
} */