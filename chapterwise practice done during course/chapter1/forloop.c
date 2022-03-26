#include <stdio.h>

int main()
{
    // int n;
    // printf("Enter a value of number \n");
    // scanf("%d", &n);
    // for (int i = n; i; i--)
    // {
    //     printf("the value of i is %d \n", i);
    // }
    int i = 0;
    do
    {
        printf("the value of i %d \n", i);
        if (i == 4){
        break;}
        i++;
    } while (i < 10);

    return 0;
}