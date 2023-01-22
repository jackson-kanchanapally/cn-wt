#include <stdio.h>
void main()
{
    int n,count=0;
    int arr[20];
    printf("enter the n value: " );
    scanf("%d",&n);
    printf("Enter elments\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elments in the array before:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nElments in the array after adding zeros:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else
        {
            count=0;
        }
        if(count ==5)
        {
            printf("0");
        }
    }
}