// write a structure capable of storing date write a function to compare those dates
#include<stdio.h>

typedef struct date{
    int date;
    int month;
    int year;
}date;

void display(date d){
    printf("the date is: %d/%d/%d \n", d.date, d.month,d.year);
}
int dateCmp(date d1, date d2){
    if (d1.year>d2.year)        // make comparison base on year,month,date
    {   return 1;
    }
    else if (d1.year<d2.year)
    { return -1;
    }
    if (d1.month>d2.month)
    {   return 1;
    }
    else if (d1.month<d2.month)
    { return -1;
    }
    if (d1.date>d2.date)
    {   return 1;
    }
    else if (d1.date<d2.date)
    { return -1;
    }    
    return 0;
    }


int main(){
    date d1 ={2,11,21};    // change date and see the result 1,-1,0
    date d2 ={5,4,22};
    display(d1);
    display(d2);   
    int a = dateCmp(d1, d2);
    printf("Date comparison function return: %d", a);
    return 0;
}