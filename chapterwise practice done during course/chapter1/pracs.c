#include<stdio.h>
float average(int a, int b, int c);
float force(float mass);

int main(){
    int a,b,c;
    printf("enter the value of a is \n ");
    scanf("%d",&a);
    printf("enter the value of b is \n ");
    scanf("%d",&b);
    printf("enter the value of c is \n ");
    scanf("%d",&c);
    printf("the value of average is %f \n",average(a,b,c));
  
    int d,e,f;
    printf("enter the value of d is \n ");
    scanf("%d",&d);
    printf("enter the value of e is \n ");
    scanf("%d",&e);
    printf("enter the value of f is \n ");
    scanf("%d",&f);
    printf("the value of average is %f \n",average(d,e,f));
    // force to mass conversion
    float m;
    printf("enter the value of mass in kg \n ");
    scanf("%f",&m);
    printf("the value of force in newton is %.2f \n",force(m));
      return 0;
}

float average(int a, int b, int c){
    float result;
    result= (float)(a+b+c)/3;
    return result;
}
float force(float mass){
    float x;
    x=mass*9.8;
    return x;
}    
