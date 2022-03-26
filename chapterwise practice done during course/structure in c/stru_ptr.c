#include<stdio.h>
struct employe
{   int code;
    float salary;
    char name[34];
};

int main(){
    struct employe yogi;
    struct employe *ptr;
    ptr=&yogi;
   // (*ptr).code=332;
    ptr->code=332;   //  we can use arrow instead of *ptr.code
    printf("%d ", yogi.code);
    return 0;
}