#include<stdio.h>
// void printPattern(int n);
// int main(){
//     int n=4;
//     printPattern(n);
//     return 0;

// }
// //for n=3
// // *
// // **
// // ****
// // 1-1
// // 2-3
// // 3-5
// // 2n-1

// void printPattern(int n){
//     if (n==1)
//     { printf("* \n");
//     return 0;
//     }
//     printPattern(n-1);
//     for (int  i = 0; i <(2*n-1); i++)
// { printf("*");
//     }
//     printf("\n");    

int main(){
    int i = 34;
    int *j = &i;
    printf("value of i is %d \n ",i);
    printf("value of j is %d \n ",*j);
    printf("the address of i is %u \n",&i);
    printf("the address of *j is %u \n",&j);
    return 0;
}
 

