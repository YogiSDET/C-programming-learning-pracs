#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter a table which needed \n");
    scanf("%d", &n);

    ptr = (int*) malloc(10*sizeof(int));
    for (int i =0; i <10; i++){
    ptr[i]= n*(i+1);    
       printf("%dX%d = %d \n", n,i+1,ptr[i]);
    }
    ptr = realloc(ptr, 15*sizeof(int));
    printf("after reallocation of realloc \n");
    for (int i =0; i <15; i++){
    ptr[i]= n*(i+1);    
       printf("%dX%d = %d \n", n,i+1,ptr[i]);
    }

    return 0;
}