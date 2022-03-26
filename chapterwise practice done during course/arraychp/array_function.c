#include<stdio.h>   // 2 way to add arry as function;
// void printArray(int *ptr, int n){
//     for (int  i = 0; i <n; i++)

//     {printf("the value of element %d is %d \n:", i+1, *(ptr+i));  // ptr+i will have  
//     }       // address of array 0,1,2,3,4,5,6,7 and *ptr will have value of that add
void printArray(int ptr[], int n){
    for (int  i = 0; i <n; i++)

    {printf("the value of element %d is %d \n:", i+1, ptr[i]);  // ptr+i will have  
    }       // address of array 0,1,2,3,4,5,6,7 and *ptr will have value of that add    
    ptr[2]=555;
}



int main(){
    int array[]= {1,2,3,4,5,6,7};
    printArray(array, 7);
    //printf("%d", array[2]); 
    return 0;
}