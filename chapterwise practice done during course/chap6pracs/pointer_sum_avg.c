// first program that i solve with logic building 
#include<stdio.h>
int sum(int *ptr, int *rtr){
    *ptr+*rtr;
    return *ptr+*rtr;

}
float avg(float *ptr, float *rtr){
    (*ptr+*rtr)/2;
    return (*ptr+*rtr)/2;
}
int main(){
    int i = 34, g=34;
    float a = 1, b=2;
    int f;
    float v;
    f = sum(& i , & g);
    v = avg(& a, & b);
    printf("sum of 2 no is %d \n", f);
    printf("avg of 2 no is %.1f \n ", v);
    return 0;
} 