#include<stdio.h>
int main(){
    int m,n,j,sum=0;

    while(1){
        scanf("%d%d",&m,&n);
        if(m<=0 || n<=0)
            break;

        else{
        sum=0;
        if(m>n){
            for(j=n; j<=m; j++){
                printf("%d ",j);
                sum=sum+j;
            }
            printf("Sum=%d\n",sum);
        }

        else if(m<n){
            for(j=m; j<=n; j++){
                printf("%d ",j);
                sum=sum+j;
            }
            printf("Sum=%d\n",sum);
            }
        }

    }
    return 0;
}
