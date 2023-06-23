#include <stdio.h>
void S();
void A();
void B();
char str[50];
int i=0;
void main(){
    printf("the grammer is\n S->AB\nA->aA | @ \n B->bB | @ \n");
    printf("enter input string");
    scanf("%s",str);
    S();
}
void S(){

    if(str[i]=='a')
    {
        A();
    }
    else if (str[i]=='b')
    {
        B();
    }
    else if (str[i]=='$')
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }
}

void A(){
    
    if(str[i]=='a')
    {
        i++;
        A();
    }
    else{
        S();
    }
}
void B(){
      if(str[i]=='b')
    {
        i++;
        B();
    }
    else if (str[i]=='$')
    {
        printf("valid");
    }
    else{
        printf("invalid");
    }
}