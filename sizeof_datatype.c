//
// Find the sizeof any datatype with out using sizeof operator
//

#include<stdio.h>
       int main()
       {
        int a,b,c,d;
        char* ch_ptr =0;
        int* int_ptr=0;
        float* float_ptr=0;
        double* doub_ptr=0;

        a=(int) (ch_ptr+1);
        b=(int) (int_ptr+1);
        c=(int) (float_ptr+1);
        d=(int) (doub_ptr+1);
        printf("char size = %d\nint size = %d\nfloat size = %d\ndouble size = %d\n",a,b,c,d);
       }