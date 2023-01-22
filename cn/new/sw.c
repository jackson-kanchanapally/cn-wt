#include <stdio.h>
void main(){
    int w,i,f,frames[20];
    printf("Enter window size : ");
    scanf("%d",&w);
    printf("frame size : ");
    scanf("%d",&f);
    for(i=1;i<=f;i++)
    {
        scanf("%d",&frames[i]);
    }
    printf("\n after sending %d frames at each stag sender waits for ack \n",w); 
    for(i=1;i<=f;i++)
    {
        if(i%w==0)
        {   
            printf("%d \n",frames[i]);
            printf("Ack of above frames sent is received by res\n");
        }
        else 
           {
            printf("%d ",frames[i]);
            }
    
    }
        if(f%w!=0){
            printf("ack of above frames is sent is res by reciver\n");
         }
}