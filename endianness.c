//to check endianness of a controller

#include<stdio.h>
void main(){
int i=0x00;
i|=0x01;
if(i>>7)
printf("big endian\n");
else
printf("little endian\n");
}