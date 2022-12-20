//
// c program to print the missing elements in an array
//

#include <stdio.h>

int main()
{
   int a[]={1,3,5,8,15,50},ele;
   int temp,i,j,count=0;
   ele=sizeof(a)/sizeof(a[0]);
   printf("%d\n",ele);
   
   for(i=0; i<ele;){
       
       if(a[i]==count){
           if(i<ele){
           i++;
           count++;
           }
       }       
           if(a[i]>count){
               if(i<ele){
               printf("%d ",count);
               count++;
               }
           
           }
       }
      
       
       
   }