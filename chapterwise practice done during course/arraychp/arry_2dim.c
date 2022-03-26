#include<stdio.h>

int main(){
    int n_student=2;
    int n_sub=3;
    int marks[2][3];
    for (int i = 0; i <2; i++)
    {for (int j = 0; j < 3; j++)
    { printf("enter a stud and sub marks %d & %d is :", i+1,j+1 );
    scanf("%d", & marks[i][j]);
    }
    }
    printf("two dimensional array element:\n"):
    for (int i = 0; i <2; i++)
    {for (int j = 0; j < 3; j++)
    { printf("enter a stud and sub marks %d & %d is: %d  \n", i+1,j+1, marks[i][j] );
    
    }
    }
    return 0;
}