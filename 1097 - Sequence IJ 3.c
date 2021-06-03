#include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<10; i++){
        if(i==1){for(j=7; j>4; j--)
        printf("I=%d J=%d\n",i,j);
        }
        else if(i==3){for(j=9; j>6; j--)
        printf("I=%d J=%d\n",i,j);
        }
        else if(i==5){for(j=11; j>8; j--)
        printf("I=%d J=%d\n",i,j);
        }
        else if(i==7){for(j=13; j>10; j--)
        printf("I=%d J=%d\n",i,j);
        }
        else if(i==9){for(j=15; j>12; j--)
        printf("I=%d J=%d\n",i,j);
        }
    }
}
