
// power of 2

#include <stdio.h>

int exponent(int num, int power){
    int res=1;
    for(int i=power; i>0; i--){
        res=res*num;
    }
    return res;
}

int main()
{
    int num,power,r;
    printf("enter the num\n");
    scanf("%d",&num);
    printf("enter the power\n");
    scanf("%d",&power);
    r=exponent(num,power);
    printf("%d",r);

    return 0;
}