#include<stdio.h>
int main(){
    int a,i,N=1;
    scanf("%d",&a);

    for(i=a; i>0; i--){
        N=N*i;
    }
    printf("%d\n",N);
    return 0;
}
