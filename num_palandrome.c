//
// cprogram to find number is palandrome or not
//


#include <stdio.h>
void main(){
    int num,rem,i=0,temp=0;
    printf("enter the num\n");
    scanf("%d",&num);
    i=num;
while(num>0){
    rem=num%10;
    temp=temp*10+rem;
    num=num/10;
}
    printf("%d\n",temp);
    
    if(temp==i){
        printf("palandrome\n");
        
    }
    else 
    printf("not palandrome\n");
    
}

