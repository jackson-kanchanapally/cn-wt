#include<stdio.h>
void main()
{
    int count=0,n;
    char a[n];
    printf("size");
    scanf("%d",&n);
    printf("enter char stream of 10 bits");
    for(int i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    printf("the shifted string is ");
    for(int i=0;i<=n;i++)
    {
        printf("%c",a[i]);
        if(a[i]==a[i])
        {
            count++;
        }
        if(count==2)
        {
            printf("@");
            count=0;
        }
    }
}