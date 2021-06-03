#include<stdio.h>
int main(){
    int x,y,m,d;
    int a=365;
    scanf("%d",&x);
    if(x<a){
        printf("0 ano(s)\n");
            m=x/30;
        printf("%d mes(es)\n",m);
            d=x-(m*30);
        printf("%d dia(s)\n",d);
        }
    else if(x>a){
            y=x/365;
        printf("%d ano(s)\n",y);
            m=(x-(y*365))/30;
        printf("%d mes(es)\n",m);
            d=(x-(y*365))-(m*30);
        printf("%d dia(s)\n",d);
    }
return 0;
}
