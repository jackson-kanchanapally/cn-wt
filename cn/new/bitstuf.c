#include <stdio.h>
void main()
{
    int n=6,count=0,arr[10];
    printf("size");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(arr[i]==1)
        {
            count++;
            if(count==2)
        {
            printf("0");
            count==0;
        }
        }
        else{
            count=0;
        }
        
    }
}
