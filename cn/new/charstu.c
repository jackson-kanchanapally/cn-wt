#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,j=0,n;
    char a[20],res[30];
    printf("Enter a string:");
    scanf("%s",&a);
    n = strlen(a);
    printf("%d",n);
    res[0] = 'D'; 
    res[1] = 'L';
    res[2] = 'E';
    res[3] = 'S';
    res[4] = 'T';
    res[5] = 'X';
    j=6;
    while(i<n)
    {
        if(a[i] == 'D' && a[i+1] == 'L' && a[i+2] =='E')
        {
            res[j] = 'D';
            res[j+1] = 'L';
            res[j+2] = 'E';
            j = j+3;
        }
     res[j] = a[i];
    i++;
    j++;    
    }
    res[j] = 'D';
    res[j+1] = 'L';
    res[j+2] = 'E';
    res[j+3] = 'E';
    res[j+4] = 'T';
    res[j+5] = 'X';
    res[j+6]  = '\0';
    printf("frames after stuffing %s ",res);
}
