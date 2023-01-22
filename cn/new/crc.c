#include<stdio.h>
#include<string.h>
void  main()
{
    int n1,n2,i,j,m,temp;
    int a[50],b[50],rem[10];
    printf("Enter stream size:");
    scanf("%d",&n1);
    printf("Enter gen size:");
    scanf("%d",&n2);
    m = n1+n2;
    printf("Enter stream data:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter gen :");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=n1+1;i<=n1+n2;i++)
    {
        a[i] = 0;
    }
    for(i=0;i<n1;i++)
    {
        temp = i;
        if(a[i] == 1)
        {
            for(j=0;j<n2;j++)
            {
                if(a[temp] == b[j])
                {
                    a[temp] =0;
                    rem[j] = 0;
                }
                else
                {
                    a[temp] = 1;
                    rem[j] = 1;
                }
                temp = temp+1;
            }
        }
    }
    printf("CRC\n");
    for(i=0;i<n2;i++)
    {
        printf("%d",rem[i]);
    }
}