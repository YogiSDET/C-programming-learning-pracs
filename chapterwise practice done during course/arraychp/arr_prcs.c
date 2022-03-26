/* #include<stdio.h>

int main(){
    int i[10]= {1,2,3,4,5,6,7,8,9,10};
    int *ptr= &i[0];
    ptr = ptr+2;
    if (ptr==&i[2])
    { printf("these point to the same location in memory \n");
    }   // i[2] means 3 arr element starts with 0 in comp
    else{
        printf("don't point the same location in memory \n");
    }
    
    //index startes with 0 so plz take a note while answering in anyone 
    return 0;
} */

#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr = &arr[0];
    ptr+=2;
    if(ptr!=&arr[2]){
        printf("same location");      
    }
    else{printf("different location");}
    return 0;
}