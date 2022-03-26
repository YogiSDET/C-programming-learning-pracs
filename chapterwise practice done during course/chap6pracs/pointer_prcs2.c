#include<stdio.h>
int swap(int a){
    printf("the add of variable a is %u \n", a);   // this 4 is different from main one copy is pass
    printf("the add of variable a is %u \n", &a);  // add will be different from main one
}

int main(){
    int i =33;
    printf("%u is \n", i);
    swap(i);    
    printf("%u is \n", &i);
    return 0;
} 