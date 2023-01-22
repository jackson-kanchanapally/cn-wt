#include <stdio.h>
int fs,ws,n,m,i,ac;
void send(int a)
{
    printf("frames sent[%d]=>",a);
}
void ack()
{
    if(n<=fs)
    {
        printf("ack");
        scanf("%d",&ac);
    }
    if(ac==0)
    {
        printf("time expired resending");
        for(i=n;i<=m;i++)
        send(i);
        ack();
}
    else if (ac==n)
    {
        printf("<-[%d] ack\n",ac);
        n++;
        if(m<fs)
        {
            m++;
            send(m);
        }
        ack();
    }
}
void main()
{
    n=1;
    printf("enter window size : ");
    scanf("%d",&ws);
    printf("enter frame size ");
    scanf("%d",&fs);
    m=ws;
    for(i=n;i<=m;i++)
    {
        send(i);
    }
    ack();
}