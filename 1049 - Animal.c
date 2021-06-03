#include<stdio.h>
#include<string.h>
int main()
{
    char x[40],y[40],z[40];
    char a[]="vertebrado",b[]="ave",c[]="mamifero";
    char d[]="invertebrado",e[]="inseto",f[]="anelideo";
    char g[]="carnivoro",h[]="onivoro",i[]="herbivoro";
    char j[]="hematofago";
    scanf("%s",x);
    scanf("%s",y);
    scanf("%s",z);
    if(strcmp(x,a)==0){
        if(strcmp(y,b)==0){
            if(strcmp(z,g)==0) printf("aguia\n");
            else if(strcmp(z,h)==0) printf("pomba\n");
        }
        else if(strcmp(y,c)==0){
            if(strcmp(z,h)==0)  printf("homem\n");
            else if(strcmp(z,i)==0) printf("vaca\n");
        }
    }
    else if(strcmp(x,d)==0){
        if(strcmp(y,e)==0){
            if(strcmp(z,j)==0) printf("pulga\n");
            else if(strcmp(z,i)==0) printf("lagarta\n");
        }
        else if(strcmp(y,f)==0){
            if(strcmp(z,j)==0)  printf("sanguessuga\n");
            else if(strcmp(z,h)==0) printf("minhoca\n");
        }
    }

    return 0;
}

