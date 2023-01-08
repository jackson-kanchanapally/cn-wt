#include <stdio.h>

int main()
{
   int a[50],n,i=0,count=0;
   printf("n=");
   scanf("%d",&n);
   printf("enter bit stream ");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("after stuffing : ");
   for(i=0;i<n;i++)
   {
    printf("%d",a[i]);
    if(a[i]==1)
    {
        count++;
    }
    if(count==2)
    {
        printf("0");
        count=0;
    }
   }
   return 0;
}