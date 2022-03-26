#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if(age!=90){
    // if(age>=90){
        printf("You are above 90, you cannot drive\n");
    }
    else if(age==50){
        printf("Half Century\n");
    }
    else{
        printf("You can drive\n");
    }
    return 0;
}
// age!=90 means any age will print you are above 90 -- false false = true (not case)
// 90!=90 means true + false = false 
