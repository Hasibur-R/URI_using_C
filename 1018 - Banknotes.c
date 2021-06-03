#include<stdio.h>
int main(){
    int x,n100,n50,n20,n10,n5,n2,n1;
    scanf("%d",&x);
    printf("%d\n",x);
    n100=x/100; printf("%d nota(s) de R$ 100,00\n",n100);
    n100=x%100;
    n50=n100/50;printf("%d nota(s) de R$ 50,00\n",n50);
    n50=n100%50;
    n20=n50/20; printf("%d nota(s) de R$ 20,00\n",n20);
    n20=n50%20;
    n10=n20/10;printf("%d nota(s) de R$ 10,00\n",n10);
    n10=n20%10;
    n5=n10/5; printf("%d nota(s) de R$ 5,00\n",n5);
    n5=n10%5;
    n2=n5/2;printf("%d nota(s) de R$ 2,00\n",n2);
    n2=n5%2;
    n1=n2/1; printf("%d nota(s) de R$ 1,00\n",n1);

    return 0;
}

