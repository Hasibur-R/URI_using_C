#include<stdio.h>
int main()
{
    double a,x,y;
    scanf("%lf",&a);

    if(a<=400){
        x=a*(.15);
        y=a+x;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 15 %%\n");
    }
     else if(a>400&& a<=800){
        x=a*(.12);
        y=a+x;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 12 %%\n");
    }
     else if(a>800 && a<=1200){
        x=a*(.10);
        y=a+x;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 10 %%\n");
    }
     else if(a>1200 && a<=2000){
        x=a*(.07);
        y=a+x;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 7 %%\n");
    }
     else if(a>2000){
        x=a*(.04);
        y=a+x;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
