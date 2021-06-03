#include<stdio.h>
int main(){
    float a,b,c,y,x;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("Perimetro = %.1f\n",x=a+b+c);
    }
    else {
        printf("Area = %.1f\n",y=(.5)*(a+b)*c);
    }
    return 0;

}
