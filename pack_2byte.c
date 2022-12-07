//
// c program to pack 3 byte num to 2 byte
//

#include <stdio.h>

int main()
{
 int rgb=0x102030,r,g,b,pack=0;
 r=((rgb >> 16)& 0Xff) ;
 g=((rgb >> 8)&0xff);
 b=((rgb)&0xff);
printf("r= %x\n",r);

printf("g = %x\n",g);
printf("b=%x\n",b);

r=(r*31)/255;
printf("%x\n",r);
g=(g*31)/255;
printf("%x\n",g);

b=(b*63)/255;
printf("%x\n",b);

pack=pack | (r<<11);
pack=pack | (g<<6);
pack=pack | (b);

printf("pack = %x",pack);
}
