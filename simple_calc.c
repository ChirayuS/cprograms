//
// 2.	Write a simple calculator program.
//      Ex: Input: 102 * 29	Output: 2958
//      Input: 102 + 28		Output: 130



#include <stdio.h>

int main()
{
    char op;
    int num,num1,num2;
    printf("enter operator 1) +  2) - 3) * 4) / \n");
    scanf("%c",&op);
    printf("enter num1 and num2\n");
    scanf("%d %d",&num1,&num2);
    switch(op){
        case '+': num = num1 + num2;
        printf("%d + %d = %d",num1,num2,num);
        break;
        
        case '-': num = num1 - num2;
        printf("%d - %d = %d",num1,num2,num);
        break;
        
        case '*': num = num1 * num2;
        printf("%d * %d = %d",num1,num2,num);
        break;
        
        case '/': num = num1 / num2;
        printf("%d / %d = %d",num1,num2,num);
        break;
        
        default:
        printf("unknown option selected \n");
        break;
        
    }
    
    
    

    return 0;
}