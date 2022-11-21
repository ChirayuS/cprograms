void main()
{
    char s[]={"noon"};
    int i,j, palindrome = 1;
    
    printf("enter the character\n");
    scanf("%s",s);
    
    for(i=0; s[i]; i++);
    
    for(i=i-1,j=0; i>j; i--,j++)
    {
        if(s[j] != s[i])
        {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome) {
        printf("Palindrome");
    } else {
        printf("Not a Palindrome");
    }
}