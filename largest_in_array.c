//
// largest element in an array
//

#include<stdio.h>
void main()
{
    int l,a[5],i,ele;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the array elements\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    l=a[0];
    
    for( i=1; i<ele; i++){
        if(a[i>l])
        l=a[i];
    }
    printf("%d is largest ele\n",l);
}
    
 