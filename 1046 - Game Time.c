#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int a,b;

    if(x==y) printf("O JOGO DUROU 24 HORA(S)\n");
    else if(x>y) printf("O JOGO DUROU %d HORA(S)\n",a=(24-x)+y);
    else if(y>x) printf("O JOGO DUROU %d HORA(S)\n",b=(y-x));

    return 0;
}
