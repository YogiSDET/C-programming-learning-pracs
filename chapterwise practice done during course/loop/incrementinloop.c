#include<stdio.h>

int main(){
    int i=5;
    printf("the value of after i++ is %d \n", i++); //this will show 5 output as i first
    // than i++ 5++--->6 but not in this 
    printf("the value of after ++i is %d \n", ++i); // out put will be 6 as increment first
    // than print
    i++; // ---> Pehle print fir increment
    ++i; // ---> Pehle increment fir print kare
    printf("The value of i is %d\n", i);

    i+=10; //--> Increments i by 10
    printf("The value of i is %d\n", i);
    return 0;

}