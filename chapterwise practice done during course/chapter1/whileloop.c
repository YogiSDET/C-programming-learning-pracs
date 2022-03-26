# include<stdio.h>
// 1st 10 even natural number
     int main(){
    //     int a;
    //     printf("enter a number \n");
    //     scanf("%d", &a);
    //     while (a<10)
    //     {
    //         printf("%d\n", a);
    //         a++;
    //     }
    // int i = 0;
    // while(i<=20){
    //     if (i>=10)
    //     {printf("The value of i is %d \n", i);
    //     }
    //     i++;
    // }
    // int i = 5;
    // printf("the value of i++ is %d \n", i++);
    // printf("the value of i is %d \n", i);
    // int j = 6;
    // printf("the value of i++ is %d \n", ++j);
    // printf("the value of i is %d \n", j);


    int i=0;
    int n;
    printf("enter a number \n");
    scanf("%d",  & n);
    do
    {
        printf("the number is %d \n", i+1);
        i++; 
    } while (i<n);
        
        return 0; 
    }