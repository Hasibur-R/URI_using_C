#include<stdio.h>
int main()
{
    int x,i;
    while(1){
        scanf("%d",&x);
        if(x==0) break;
        for(i=1; i<=x; i++){
            if(i%x!=0){
            printf("%d ",i);
            }
            else printf("%d\n",i);
        }
    }
    return 0;
}
