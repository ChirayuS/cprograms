//
// cprogram to find the number is  prime or not 
//


#include <stdio.h>
void main(){
    int num,rem,i;
    printf("enter the num\n");
    scanf("%d",&num);
    
    for(i=2;i<num;i++){
        if((num%i)==0)
        break;
    }
    if(num==i){
        printf("prime\n");
        
    }
    else
    printf("not prime");
    
    
    
}

