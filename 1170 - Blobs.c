#include<stdio.h>
int main()
{
    int a,i,count;
    float b;
    scanf("%d",&a);
    for(i=0; i<a; i++){
        scanf("%f",&b);
        count = 0;
        while(b>1){
            b/=2;
            count++ ;
        }
        printf("%d dias\n",count);
    }
    return 0;
}
