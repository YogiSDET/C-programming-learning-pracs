#include<stdio.h>
int max_arr(int arr[], int n){
    int max =0;
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    } 
    return max;   
}    
int main(){
    int arr[20];
    printf("enter a arry using space\n");
    scanf("%d %d %d %d %d ", &arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    
    int k;
    k = max_arr(arr,5);
    printf("the max element in this arr is %d", k);
    return 0;
}