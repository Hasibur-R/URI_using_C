#include<stdio.h>
int main(){
    int NUMBER,WH;
    float RH,SALARY;
    scanf("%d%d%f",&NUMBER,&WH,&RH);
    SALARY=WH*RH;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,SALARY);
    return 0;
}
