#include<stdio.h>
int main()
{
    int x,y,i,sum_1=0,sum_2=0;
    scanf("%d%d",&x,&y);

    if(x>y){
        for(i=y+1; i<x; i++){
            if(i%2!=0){
                sum_1=sum_1+i;
            }
        }
         printf("%d\n",sum_1);
    }
    else if(y>x){
        for(i=x+1; i<y; i++){
            if(i%2!=0){
                sum_2=sum_2+i;
            }
        }
        printf("%d\n",sum_2);
    }
    else if(x==y) printf("0\n");
    return 0;
}

