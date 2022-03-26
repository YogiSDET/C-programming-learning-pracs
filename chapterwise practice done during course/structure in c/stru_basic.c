#include<stdio.h>
struct employe
{   int code;
    float salary;
    char name[34];
};


int main(){
    struct employe yogi ={32,12.22,"yogi"};
    printf("code is : %d, %f,%s", yogi.code,yogi.salary,yogi.name);
    return 0;
}   