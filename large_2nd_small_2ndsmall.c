//
//cprogram to print the large, second large, small, second small number in an unsorted array
//

#include <stdio.h>

int main()
{
    int a[10],ele,large,small,sl,ss,temp;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the number\n");
    for(int i=0; i<ele; i++)
    scanf("%d",&a[i]);

    
    large=a[0],small=a[0],sl=a[1],ss=a[1];
    if(large<sl){
        temp=large;
        large=sl;
        sl=temp;
    }
    if(small>ss){
        temp=small;
        small=ss;
        ss=temp;
    }
    
    
    for(int i=2; i<ele; i++){
        if(a[i]>large){
        sl=large;
        large=a[i];
        }
        
        if(a[i]<small){
        ss=small;
        small=a[i];
        }
    }
    printf("large = %d\nsmall = %d\nsecond large = %d\nsecond small=%d\n",large,small,sl,ss);
}
