#include<stdio.h>
void slicer(char *st, int a, int b){
    int i=0;
    while ((a+i)<b){
    st[i]= st[i+a];            
    i++;
}   st[i]='\0';
}
int main(){
    char st[]="Yogendra";
    slicer(st,0,7);
    printf("%s", st);

    return 0;
}   