#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&i);
    for(a=1; a<=i; a++){
        if(a%2!=0) printf("%d\n",a);
    }
    return 0;
}

