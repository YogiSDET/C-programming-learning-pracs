/* #include<stdio.h>
#include<conio.h>

// add two no using recursion
int add(int m, int n){
    int y;
    if(n==0)
    return m;
    else
    y = add(m,n-1)+1;
    return y;
}
int main(){
    int m = 22 ;
    int n=12;
    int y;
    y = add(m,n);
    printf("%d", y);
    return 0;
} */

/* #include<stdio.h>

int power(int base, int exp){
    if(exp ==1)
    return 1;
    else
    return(base*power(base,exp-1));
}

int main(){
    int a,b;
    a =4, b=4;
    int c = power(a,b);
    printf("power of %d is %d", a, c);
    return 0;
} */

#include<stdio.h>
int prime(int n, int i ){
    if(i==1){
        return 1;
    }
    else {
    if(n%i==0)
    return 0;
    else 
    prime(n,i-1);
    }
}

int main(){
    int n,p;
    printf("enter a no \n");
    scanf("%d", &n);
    p = prime(n,n/2);
    if(p==1){
        printf("%d is a prime no", n);}
    else
        printf("%d is not a prime no", n);

    return 0;
}