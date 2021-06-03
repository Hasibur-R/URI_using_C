#include<stdio.h>
int main()
{
    long long int m,n,i,j,sum_1=1,sum_2=1;

    while(scanf("%lld %lld", &m, &n) != EOF){
        for(i=m; i>0; i--){
            sum_1=sum_1*i;
        }
        for(j=n; j>0; j--){
            sum_2=sum_2*j;
        }
        printf("%lld\n",sum_1+sum_2);
        sum_1=1,sum_2=1;
    }
    return 0;
}
