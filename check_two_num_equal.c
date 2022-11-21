//program to check two numbers are equal or not without using 
//assignment operators and comparision operators

#include <stdio.h>

void main()
{
   int i,j;
   printf("enter i and j \n");
   scanf(" %d",&i);
   scanf(" %d",&j);
   
   if(i^j)
   {
       printf("two numbers are not equal\n");
       
   }
   else printf("equal\n");
}