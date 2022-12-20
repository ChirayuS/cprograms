
//
//cprogram to reverse array
//
#include <stdio.h>

int main()
{
    int a[10],ele,temp;
    ele=sizeof(a)/sizeof(a[0]);
    
    printf("enter the array\n");
    for(int i=0; i<ele; i++)
    scanf("%d",&a[i]);
    
    
for(int i=0,j=ele-1; i<j; i++,j--){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
for(int i=0; i<ele; i++)
printf("%d ",a[i]);
}