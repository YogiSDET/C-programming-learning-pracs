#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter a nth no want you \n");
    scanf("%d", & n);
    ptr = (int*)malloc(4*sizeof(int));
    for (int i = 0; i <n; i++)
    {printf("value entered is %d  : \n", i);
        scanf("%d", & ptr[i]);
    }
      for (int i = 0; i <n; i++)
    {printf("value entered is %d and %d : \n", i, ptr[i]);
    }
    return 0;
}