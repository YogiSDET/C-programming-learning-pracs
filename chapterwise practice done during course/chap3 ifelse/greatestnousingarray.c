#include<stdio.h>

int main (void){
    int array[] = {233,1,156,9};
    int length = sizeof array / sizeof array[0];
    int big, small;

    big=small=array[0];
    for (int i = 0; i < length; i++){
        if(array[i]>big){
            big=array[i];
        }

        if(array[i]<small){
            small=array[i];
        }
    }

    printf("The biggest Number is:\t%d\n",big);
    printf("The smallest Number is:\t%d\n",small);

    return 0;
}