//
//c program to delete the char in a string
//


 #include <stdio.h>
 #include <string.h>
        int main()
        {
            char s[] ="embedded",ch='d';
            for(int i=0; s[i]; i++){
                if(s[i]==ch){
                    for(int j=i; s[j]; j++){
                        s[j]=s[j+1];
                    }
                    i--;
                }
            }
            printf("%s",s);
        }
