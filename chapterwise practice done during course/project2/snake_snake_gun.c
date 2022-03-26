#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// return 1 if you win, -1 you lose, 0 for draw;
// draw conditon- ss,ww,gg; // other conditions- sg,gs,wg,gw,ws,sw; 
int snakeWaterGun(char you, char comp){
    if (you==comp)
    {   
        return 0;
    }
    if (you=='s' && comp=='g')
    {   return -1;
    }
    else if (you=='g' && comp=='s')
    {   return 1;
    }
     if (you=='w' && comp=='g')
    {   return 1;
    }
    else if (you=='g' && comp=='w')
    {   return -1;
    }
    if (you=='w' && comp=='s')
    {   return -1;
    }
    else if (you=='s' && comp=='w')
    {   return 1;
    }       
}


int main(){
    char you, comp;
    srand(time(0));
    int number= rand()%100+1;
    if (number<33)
    {   comp = 's';
    }
    else if (number>33 && number<66)
    {   comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("enter your character- snake 's', water 'w', gun 'g': \n");
    scanf("%c", &you);
    int a = snakeWaterGun( you,comp); 
    if (a==0)
    {   printf("game draw \n");
    }
    else if (a==1)
    {   printf("you win \n");
    }
    else{
        printf("you lose \n");
    }
    printf("your choose %c comp choose %c :", you,comp);
    return 0;
}
