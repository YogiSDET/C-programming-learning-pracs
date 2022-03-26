#include <stdio.h>

int main()
{
    int i = 32;
    int *j;
    j = &i;
    int **k = &j;
printf("value of i is %d is \n ", i);        // only i is 32
printf("value of i is %d is \n ", *j);      // *j means value of add operator which is 32
printf("value of i is %u is \n ", j);       // only j will print address of i
printf("value of i is %u is \n ", &i);      // &i is address of i variable
printf("value of j is %u is \n ", &j);      // &j is address of j which will be different
                                            // from &i address,
printf("value of j is %u is \n ", *(&j));   // value of j will be output 
                                            //which is i address 
printf("value of k is %u is \n ", **k);   // value =32
return 0;
}
