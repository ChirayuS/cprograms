#include <stdio.h>

int main()
{
    int i,j,k=0;
    printf("enter the 8bit number\n");
    scanf("%x",&i);
    j=i;
    
    i=i>>4;
    j=j<<4;
    j=(i|j)&0xff;
 printf("%x",j);
    return 0;
}