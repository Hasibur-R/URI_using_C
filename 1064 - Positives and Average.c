#include<stdio.h>
int main()
{
    int i,count1=0;
    double a,sum=0,b;
    for(i=0; i<6; i++){
        scanf("%lf",&a);
        if(a>0){ count1++ ;
        sum=sum+a;
        }
    }
    printf("%d valores positivos\n",count1);
    b=sum/count1;
    printf("%.1lf\n",b);
    return 0;
}
