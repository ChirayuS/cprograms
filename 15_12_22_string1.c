//
// c program to capatalize the first letter in a word if the letter is a "vowel"
//

#include <stdio.h>
#include <string.h>

int main()
{
    char s[]={"i bought A toy ink pen yesturday"};
    char i,j;
    s[0]=s[0]-32;
    for(i=0; i<s[i];i++)

    {   
        // 
        if(s[i] == ' '){
            i++;
        if((s[i]>='a')&&(s[i]<='z')){  
            if((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u')){
       s[i]= s[i] -'a' + 'A';
            }
        }
        }
    }
printf("%s",s);
    return 0;
}