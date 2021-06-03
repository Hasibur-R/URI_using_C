#include<stdio.h>
int main(){
    float s=1,i,j=1;
    for(i=3; i<=39; i+=2){
            j=j*2;
        s=s+(i/j);

    }
     printf("%.2f\n",s);
}
