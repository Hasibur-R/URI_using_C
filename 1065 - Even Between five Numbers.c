#include<stdio.h>
int main()
{
    int a,i,count1=0;
    for(i=0; i<5; i++){
        scanf("%d",&a);
        if(a%2==0) count1++ ;
    }
    printf("%d valores pares\n",count1);
    return 0;
}
