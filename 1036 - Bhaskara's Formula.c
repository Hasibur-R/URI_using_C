#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,x1,x2,t;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0){
        printf("Impossivel calcular\n");
    }
    else{
            if(((b*b)-4*a*c)>0){
        t=sqrt((b*b)-4*a*c);
        x1=(-b+t)/(2*a);
        x2=(-b-t)/(2*a);
        printf("R1 = %.5lf\n",x1);
        printf("R2 = %.5lf\n",x2);

            }
            else {
                 printf("Impossivel calcular\n");
            }
    }

    return 0;
}
