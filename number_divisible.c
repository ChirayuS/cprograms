
// c program to find the number is divisible by the given divisor

#include <stdio.h>

int divisible(int num, int divi){
    if((num%divi)==0){
        return 1;
    }
    return 0;
}


int main()
{
    int num,divi,res;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("enter the divisor\n");
    scanf("%d",&divi);
    res = divisible(num, divi);
    if(res)
        printf("%d is divisible by %d",num,divi);
        else
        printf("not divisible\n");
    return 0;
}