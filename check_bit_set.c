//function to check number of bits is set 

#include<stdio.h>   

int my_func(int num){
    int c=0;
    for(int pos=31; pos>=0; pos--){
        if(num>>pos&1)
        c++;
    }
    return c;
}

void main()
{
    int num=20,pos,r;
     
    for(pos=31; pos>=0; pos--)
    {
        printf("%d",num>>pos&1);
    }
    printf("\n");
    r=my_func(num);
    
    printf("count = %d",r);
}