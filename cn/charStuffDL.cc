#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    printf("enter value");
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='D'&&a[i+1]=='L'&&a[i+2]=='E')
        {
            printf("dle");
        }
        printf("%c",a[i]);
    }
    printf("DLEETX");
    return 0;
}