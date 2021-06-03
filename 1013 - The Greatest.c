#include<stdio.h>
int main(){
    int a,b,s;
    scanf("%d%d%d",&a,&b,&s);
    if(a>b&&a>s){
        printf("%d eh o maior\n",a);
    }
    if(b>a&&b>s){
        printf("%d eh o maior\n",b);
    }
    if(s>b&&s>a){
        printf("%d eh o maior\n",s);
    }
    return 0;
}
