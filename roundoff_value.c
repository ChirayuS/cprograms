#include <stdio.h>
int truncate(int num , int roundoff){
    int ele,r;
    if(num<=roundoff){
    return roundoff;
    }
     if (num < (roundoff+(roundoff/2))){
         ele = num % roundoff; 
         return (num-ele); 
    }
    
    if (num > (roundoff/2)){
        ele = num % roundoff;
        return (num +(roundoff - ele));
    }
}
int main()
{
    int num,r,roundoff;
    printf("enter the num\n");
    scanf("%d",&num);
    
    printf("enter the roundoff number\n");
    scanf("%d",&roundoff);
    r = truncate(num,roundoff);
    printf("%d",r);
    return 0;
}