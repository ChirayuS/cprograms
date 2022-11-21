
#include <stdio.h>

void main()
{
    int i,j,k,pos,num,m,n;
    printf("enter the number\n");
    scanf("%d",&num);
    
    for(pos=7;pos>=0;pos--)
    {
        printf("%d",num>>pos&1);
        
    }
    printf("\n");
    for(i=0,j=7; i<j; i++,j--)
    { 
        m=num>>i&1;
        n=num>>j&1;
        if(m!=n){
        num=num^1<<i;
        num=num^1<<j;
        }
    }
    for(pos=7;pos>=0;pos--)
    printf("%d",num>>pos&1);
    
}