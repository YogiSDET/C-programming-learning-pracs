#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main(){
        int number, guess, nguess=1;
        srand(time(0));
        number= rand()%1000+2;
        printf("the number is %d \n", number);
        do
        {   printf("the number guss bet 1 to 100 \n");
            scanf("%d", & guess);
            if (guess>number)
            {printf("number guess is lower \n", guess);
            }
            else if (guess<number)
            {printf("number guess is higher \n", guess);
            }
            else {
                printf("your guess number is correct %d attempts\n",nguess);
            }  
            nguess++;  
        } while ( guess!=number);
            return 0;   
    }