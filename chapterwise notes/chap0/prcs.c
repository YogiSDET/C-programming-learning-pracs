#include<stdio.h>

int main(){
    int marks_stud[5];
    for(int i =0; i<5;i++){
        printf("enter a marks of student %d\n", i+1);
        scanf("%d", & marks_stud[i]);
    }
    for(int i=0; i<5; i++){
          printf("marks of student %d is %d\n",i+1, marks_stud[i] );
    }
  
    // printf("enter a marks of student by giving space one after:\n ");
    // scanf("%d %d %d %d %d", & marks_stud[0],&marks_stud[1]
    // ,&marks_stud[2],&marks_stud[3],&marks_stud[4]);
    // printf("marks of student 1 is %d\n", marks_stud[0]);
    // printf("marks of student 2 is %d\n", marks_stud[1]);
    // printf("marks of student 3 is %d\n", marks_stud[2]);
    // printf("marks of student 4 is %d\n", marks_stud[3]);
    // printf("marks of student 5 is %d\n", marks_stud[4]);
    // //array start with 0 to 3 (n-1)
    return 0;  
}