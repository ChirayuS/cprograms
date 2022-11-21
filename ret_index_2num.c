

//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
#include<stdio.h>
 int a[]={3,3},i,j,target=6,ret;
 int ele = sizeof(a)/sizeof(a[0]);

int find(int target){
for(i=0; i<ele; i++)
{
    for(j=1;j<ele;j++){
        
        if((a[i]+a[j]) == target)
        return 1;
    }
    
}
}
void main()
{


ret = find(target);

if(ret)
 printf("%d %d",i,j);
}