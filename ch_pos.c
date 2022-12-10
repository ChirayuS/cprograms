//
// 	Take a character as an input and display its position in the a-z.
//


#include <stdio.h>

int main()
{
    int r;
    char ch;
    printf("enter character\n");
    scanf("%c",&ch);
    
    r=ch&31;
    printf("%d",r);
}
