//
//cprogram to print the sum of even number and product of odd number
//
#include <stdio.h>

int main()
{
    int a[10],ele,sum=0,prod=1;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the array\n");
    for(int i=0; i<ele; i++)
    scanf("%d",&a[i]);
    
    for(int i=0; i<ele; i++){
        if((a[i]%2)==0){
            sum+=a[i];
            
        }
        else{
         prod*=a[i];   
        }
    }
printf("sum = %d\nproduct = %d",sum,prod);
    return 0;
}