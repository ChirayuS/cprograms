//
// c program to change the first word in a string
//

#include <stdio.h>
#include <string.h>

int main()
{
char s[]="personality is everything in art and poetry";
int i,j,temp;
for(j=0; s[j]; j++);
for(i=0,j=j-1;i<j;i++,j--){
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    
}
printf("%s",s);
}