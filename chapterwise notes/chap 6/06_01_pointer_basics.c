/* #include<stdio.h>

int main(){
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("The value of i is %d\n", i);  
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));
    return 0;
}
 */

#include<stdio.h>
int main(){
    int i =34;
    int *j = &i;
    printf("value of %d %d", i, *j);
    printf("add of %u %u %u is ", &i ,j,&j);
    return 0;
}