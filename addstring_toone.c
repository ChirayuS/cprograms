//
// add 2nd string at the begining of first string
//

#include<stdio.h>
void main()
{
    char s[10],f[10];
    int i,j;
    printf("enter the 1st string\n");
    scanf("%s",f);
    printf("enter the 2st string\n");
    scanf("%s",s);
    
    
    for( i=0; f[i]; i++);
    
    
    for( j=0; s[j];j++, i++){
        
        f[i]=s[j];
        f[i]=s[j];
    }
    printf("%s  ",f);
}