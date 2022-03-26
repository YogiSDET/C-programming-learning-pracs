#include<stdio.h>
//write a program to find grade of a student given his marks based on below
// using switch cases
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d", & marks);
    switch (marks/10)
    {
    case 10: 
        printf("Grade : A");
    case 9:
        printf("Grade : A");
        break;
    case 8:
        printf("Grade : B");
        break;
    case 7:
        printf("Grade : C");
        break;
    case 6:
        printf("Grade : D");
        break;
    case 5:
        printf("Grade : E");
        break;
    default:
        printf("Grade : F");
        break;
    }
    return 0;
};