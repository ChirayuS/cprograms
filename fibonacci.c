
//cprogram to find the fibonacci series

#include <stdio.h>

int fibonacci (int num, int *ptr){
    
    int result=1,a=0,temp;

    for(int i=0; i<num; i++){
    temp=a;
    a=result;
    result=temp;
    result=a+result;
    // printf("%d ",result);

    ptr[i]=result;
    
    }
    return result;
}

int main()
{
    int num,r,ar[10];
    printf("enter the num\n");
    scanf("%d",&num);
    r=fibonacci (num,ar);
    for(int i=0; i<num; i++)
    printf("%d ",ar[i]);
  
}