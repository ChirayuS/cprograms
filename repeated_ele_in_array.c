//
// program to find the repeated elements in an array
//



#include <stdio.h>

int main()
{
    int array[]={10,5,17,12,5,6,7,17,12,17},ele,large,small;
    int result;
    ele=sizeof(array)/sizeof(array[0]);
    large=array[0];
    small=array[0];
    for(int i=1; i<ele; i++){
        if(array[i]>large)
        large=array[i];
        if(array[i]<small)
        small=array[i];
    }
    result = large-small;
printf("%d %d %d",large,small,result);
    return 0;
}