#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    float p1,p2,p3,p4,p5;

    if(x==1) printf("Total: R$ %.2f\n", p1=(4*y));
    else if(x==2) printf("Total: R$ %.2f\n", p2=(4.50*y));
    else if(x==3) printf("Total: R$ %.2f\n", p3=(5*y));
    else if(x==4) printf("Total: R$ %.2f\n", p4=(2*y));
    else if(x==5) printf("Total: R$ %.2f\n", p5=(1.50*y));

    return 0;
}
