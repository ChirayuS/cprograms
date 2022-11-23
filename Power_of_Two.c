//Power of Two c program Given an integer n, return true if it is a power of two. Otherwise, return false.

#include <stdio.h>
int my_fun(int num){
     int i,c=0;
  
  for(i=3; i>=0; i--){
      if((num>>i&1)==1)
      c++;
  }
  if(c==1)
     return 1;
    else 
    return 0;
}
int main()
{
 int r,num;
 printf("enter the num\n");
 scanf("%d",&num);
 
 r=my_fun(num);
 
 if(r)
 printf("true\n");
 else
 printf("false\n");
}