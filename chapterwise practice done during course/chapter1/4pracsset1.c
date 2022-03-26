# include<stdio.h>
int main(){

    int radius = 21;
    float pi = 3.14;
    int height = 14;
    printf("The area of circle is %f \n", pi*radius*radius );
    printf("The area of cylinder is %f \n", pi*radius*radius*height );

    // simple interest program
    int principal = 122, rate =3, years =2;
    int SI = principal*rate*years/100;
    printf("the value of SI is %d \n", SI );

    // celius to fahrenheit program
    float celius = 37 ,far;
    far = (celius *9/5) + 32;
    printf("The value of celius to fah is %f \n", far);

// length and breadth via user input
    int length, breadth;
    printf("value of length is \n");
    scanf( "%d", & length); 
    printf("value of breadth is \n");
    scanf( "%d", & breadth); 
    printf("area of rectange is %d \n", length*breadth);

    return 0; 
}
