#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[50];
int top=-1;
void push(char ch){
    top++;
    stack[top]=ch;
}
char pop(){
    char ch;
    if(top!=-1)
    {
        ch=stack[top];
        top--;
        return ch;
    }
    return '@';
}
void dis()
{
    int i;
    printf("\n\t$");
    for(i=0;i<=top;i++)
    printf("%c",stack[i]);
}
void main()
{
    int i,k,l;
    char str[30],op,temp,temp2;
    printf("\n\t slr E->E+E|E-E|E*E|E/E|id\n\t enter expression");
    scanf("%s",str);
    l=strlen(str);
    printf("\n\t");
    for(i=0;i<l;i++)

    {
        if(str[i]=='i'&& str[i+1]=='d')
        {
            str[i]=' ';
            str[i+1]=='E';
            dis();
            printf("id");
            push('E');
            dis();
        }
        else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
            push(str[i]);
            dis();
        }
    }
    while(1)
    {
        op=pop();
        if(op=='@')
        {
            printf("\n\t\t\t$");
            break;

        }
        if(op=='+'||op=='-'||op=='*'||op=='/')
        {
            temp2=pop();
            if(temp2!='E')

            {
                printf("error");
                exit(1);
            }
            else{
                push('E');
                dis();
            }
        }
        temp=op;
    }
}