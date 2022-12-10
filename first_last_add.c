//
//	If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.
//  Ex: Input 1234		Output: 5
//

//
// to add first and last digit in a number
//

#include<stdio.h>
void main(){
int num,temp=1,count=0,r,rem,num1;
printf("enter the number\n");
scanf("%d",&num);
num1=num;
rem=num%10;
for(int i=0; i<num; i++){
num=num/10;
count++;
}
for(int i=count; i>0; i--)
temp=temp*10;
num1=num1/temp;
r=rem+num1;
printf("%d",r);
}
