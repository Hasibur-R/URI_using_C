#include<stdio.h>
int main(){
    int A,B,UA,UB;
    float AP,BP,Total;
    scanf("%d%d%f%d%d%f",&A,&UA,&AP,&B,&UB,&BP);
    Total=((UA*AP)+(UB*BP));
    printf("VALOR A PAGAR: R$ %.2f\n",Total);
    return 0;
}
