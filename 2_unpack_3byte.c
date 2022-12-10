//
// 	4.	Convert a 2-byte RGB value with (R: 5-bits, G: 6-bits, B: 5-bits) to 3-byte RGB value
//

#include<stdio.h>
int un_pack(int num){
    int r,g,b,unpack=0;
    r=(num>>11);
    g=(num>>5)&0x3f;
    b=(num&0x1f);
    
    r=r<<3;
    g=g<<2;
    b=b<<3;
    
    unpack|=(r<<16);
    unpack|=(g<<8);
    unpack|=b;
return unpack;    
}

void main(){
    int re,num;
    printf("enter the number\n");
    scanf("%x",&num);
    re=un_pack(num);
    printf("%x",re);
}

