//3.	Round up and round down for a given number to the nearest 50.
//Ex: Input: 1234		Output: 1250

#include <stdio.h>
int truncate(int num ){
    int ele,r;
    if(num<=50){
    return 50;
    }
     if (num < (50+(50/2))){
         ele = num % 50; 
         return (num-ele); 
    }
    
    if (num > (50/2)){
        ele = num % 50;
        return (num +(50 - ele));
    }
}
int main()
{
    int num,r;
    printf("enter the num\n");
    scanf("%d",&num);
    r = truncate(num);
    printf("%d",r);
    return 0;
}