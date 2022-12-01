//
// c program to check the number is a perfect number
//

#include <stdio.h>

int square(int num){
    int res;
    for(int i=0; i<=num/2; i++){
        
        res = i*i;
        if(res==num){
            return 1;
            break;
        }
    }
    return 0;
}


int main()
{
    int num,r;
    printf("enter the num\n");
    scanf("%d",&num);
    
    r=square(num);
    if(r)
    printf("perfect square\n");
    else
    printf("not perfect\n");

    return 0;
}