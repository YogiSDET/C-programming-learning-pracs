#include<stdio.h>

int main(){
    char grade;
    printf("enter your grade \n");
    scanf("%c", &grade);
    
    switch(grade)
    {
    case 'A':
    printf("well done\n");
    break;
    case 'B':
    printf("excellent \n");
    break;
    default:
    printf("invalid \n");  
    }
    return 0;
};
