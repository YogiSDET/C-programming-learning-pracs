#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	char s[100];
    printf("enter a string letter \n");
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n%s", s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x , y ; 
    float a , b ; 
    scanf("%d %d",&x,&y) ; 
    scanf("%f %f" , &a,&b) ; 
    printf("%d %d\n",x+y,x-y) ;
    printf("%.1f %.1f" , a+b,a-b) ;
    return 0;
}

#include <stdio.h>
int max_of_four(int a,int b,int c,int d)
{
    int gre;
    if(a>b && a >c && a >d)
        gre = a;
    else if(b>a && b>c && b>d)
        gre = b;
    else if(c>a && c>b && c>d)
        gre = c;
    else if(d>a && d>b && d>c)
        gre = d;
    
return gre;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
/* return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    	...
        ...
        ...
        [if return_type is non void]
        	return something of type `return_type`;
    } */
