/* #include<stdio.h>
// 2000,2004,2008,2012,2016,2020,2024,2028,2032,2036,2040,2044,2048
int main(){
    int year;
    printf("enter a year \n");
    scanf("%d", & year);
    if ((year%4==0) && ((year%400==0) || (year%100!=0)))
    {
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
    
    return 0;
};
 */
/* #include<stdio.h>
int main(){
    int year;
    printf("enter a year \n");
    scanf("%d", & year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0)
                printf("leap year");
            else   printf("not a leap year"); 
            }
        else printf("leap year");    
        }
    else printf("not leap year");  
    return 0;
};
 */
/* #include<stdio.h>
int main(){
  int year;
  printf("enter a year\n");
  scanf("%d", & year);
  int remainder;
remainder =((year%4==0) && ((year%100!=0) ||(year%400==0)));
switch(remainder){
    case 1:
    printf("leap year");
    break;
    case 0:
    printf("not leap year");
    break;
    default:
    printf("invalid");
    break;
}
    return 0;
}; */

#include<stdio.h>
int main(){
int year;
    printf("enter a year \n");
    scanf("%d", & year);
    if(year%400==0){
        printf("%d is a leap year \n", year);
    }
    else if (year%100==0){
        printf("%d is not a leap year \n", year);
    }
    else if (year%4==0){
        printf("%d is a leap year \n", year);
    }
    else{
        printf("%d is a not leap year \n", year);
    }
    return 0;
}