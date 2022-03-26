#include <stdio.h>

int main()
{
    int a, b = 2, prime = 1;
    printf("enter a no");
    scanf("%d", &a);
    while (b < a)
    {
        if (a % b == 0)
        {
            prime = 0;
            break;
        }
        a++;
    }
    if (prime == 0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}
