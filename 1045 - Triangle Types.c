#include <stdio.h>
int main(){
    double a, b, c, tempaa;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a<b){
        tempaa=a;
        a=b;
        b=tempaa;
    }
    if (b<c){
        tempaa=b;
        b=c;
        c=tempaa;
    }
    if (a<b){
        tempaa=a;
        a=b;
        b=tempaa;
    }

    if (a>=b+c) printf("NAO FORMA TRIANGULO\n");
    else if(a*a==b*b+c*c)printf("TRIANGULO RETANGULO\n");
    else if (a*a>b*b+c*c)printf("TRIANGULO OBTUSANGULO\n");
    else if (a*a<b*b+c*c)printf("TRIANGULO ACUTANGULO\n");

    if (a==b&&b==c)
        printf("TRIANGULO EQUILATERO\n");
    else if (a==b||b==c)printf("TRIANGULO ISOSCELES\n");

    return 0;

}
