#include<stdio.h>
int main(){
    char array[50];
    float FS,TM,TOTAL;
    scanf("%s %f %f",&array,&FS,&TM);
    TOTAL=FS+((TM*15)/100);
    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;
}
