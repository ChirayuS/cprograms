//
// cprogram to find diff between integer pointer and character pointer
//


#include <stdio.h>
void main(){
    int i=258;
    int*iptr;
    char*cptr;
    
    iptr=&i;
    cptr=(char*)&i;
    printf("cptr = %d\niptr = %d",*cptr,*iptr);

    
    
}