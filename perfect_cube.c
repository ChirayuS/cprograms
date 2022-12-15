
//5.	Find a given value is a perfect cube or not
//Ex: Input: 8		Output: Perfect cube
//Input: 9			Output: Not a perfect cube






#include <stdio.h>

int main()
{
    int num=26;
    
    for(int i=1; i<num; i++){
        if(i*i*i==num){
            printf("perfect cube\n");
            return 0;
        }
    }
printf("not perfect\n");
    return 0;
}