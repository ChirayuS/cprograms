
#include <stdio.h>

// program to Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
#include <stdio.h>

int main() {
    // Write C code here

int a[3][3]={1,1,1,
             1,0,1, 
             1,1,1};
int b[3][3]={1,1,1,
             1,0,1,
             1,1,1};

int i,j,k;

for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        if(b[i][j]==0)
        {
            for(k=0; k<3; k++)
            {
                a[i][k]=0;
            }
            for(k=0; k<3; k++)
            {
                a[k][j]=0;
            }
        }
    }
}
for(i=0; i<3; i++){
for(j=0; j<3; j++){
printf("%d ",a[i][j]);
}
    printf("\n");
}
}