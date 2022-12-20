//
//cprogram to find the largest of 3element in an array
//

#include <stdio.h>

int main()
{
    int a[9]={1,2,15,4,5,6,7,8,9},ele;
    int res=0,sum=0,block=3;
    ele=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<ele;i++ ){
        
        if((i % block)==0){
            if(sum>res){
            res=sum;
            sum=0;
        }
        }
        sum+=a[i];
        
        
    }
 printf("%d",res);

    return 0;
}