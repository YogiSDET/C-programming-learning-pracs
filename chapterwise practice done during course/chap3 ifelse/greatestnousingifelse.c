#include <stdio.h>

int main(){   
    int a,b,c,d,x,y;
    x=y;
    printf("enter a four integers (with space in one line):");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d)
    {if (b<c && b<d)
    { x=b;}
    else if (c<b && c<d)
    { x=c;}
    else if (d<b && d<c)
    { x=d;}
    printf("largest %d \n", a);
    printf("smallest %d \n", x);
    }
    else if (b>a && b>c && b>d) {
      if (a<c && a<d){
        x  = a;
      }
      else if(c<a && c<d){
        x = c;
      }
      else if(d<a && d<c){
        x = d;
      }

      printf("Largest: %d\n", b);
      printf("Smallest: %d", x);
    }
    else if (c>a && c>b && c>d)
    {
      if (a<b && a<d){
        x = a;
      }
      else if(b<a && b<d){
        x = b;
      }
      else if(d<a && d<b){
        x = d;
      }

      printf("Largest: %d\n", c);
      printf("Smallest: %d", x);
    }
    else if (d>a && d>b && d>c) {
      if (a<b && a<c){
        x = a;
      }
    else if(b<a && b<c){
      x = b;
    }
    else if(c<a && c<b){
      x = c;
    }

    printf("Largest: %d\n", d);
    printf("Smallest: %d", x);
  }
    return 0;
}
