//
// cprogram to find the permutation and combinations in a string 
//


#include <stdio.h>
#include <string.h>
void combinations(char*,int,int);
void main(){
    
char str[]={"spaces"};
int len;
len =strlen(str);


for(int i=0; i<len; i++){
    combinations(str,len - i, i+ 1);
    printf("\n");
}

}

void combinations(char*sptr, int len, int comb){
    
    for(int off=0; off<len; off++){
        for(int i=0; i<comb; i++){
            printf("%c",sptr[i+off]);
        }
        printf(" ");
    }
      
            
        
    }