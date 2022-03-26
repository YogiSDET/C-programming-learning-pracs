/* #include<stdio.h>
void printTable(int *arr, int n ){
    for (int i=0; i <10; i++)
    {    arr [i]= n*(i+1);
    }
    for (int i=0; i <10; i++)
    {    printf("%dX%d = %d \n", n,i+1, arr[i]);
    }
}
//arr[i] means main function will send arr[0] in arr[i]
int main(){
    int arr[3][10];
    printTable(arr[0],2);
    printTable(arr[1],7);
    printTable(arr[2],10);
    
    return 0;
} */
//pracs :
#include<stdio.h>
void multi(int arr[], int b){
    for(int i=0; i<12;i++){
        arr[i]= b*(i+1);    
    }
    for(int i= 0; i<12; i++){
        printf("%dX%d = %d\n", b,i+1,arr[i]);
    }
}
int main(){
    int arr [3][12];
    multi(arr[0],5);
    multi(arr[1],5);
    multi(arr[2],5);
    return 0;
}