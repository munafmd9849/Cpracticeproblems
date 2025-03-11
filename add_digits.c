
#include <stdio.h>

int main()
{
    int num,num1,num2,num3,num4,res;
    
    
    printf("enter the 4 digit number");
    
    scanf("%d",&num);
    
    num1 = num%10;//4
    num =num/10; //123
    
    num2 = num%10;//3
    num =num/10;//12
    
    num3 = num%10;//2
    
    num4=num/10;//1
    
    
    res = num1+num2+num3+num4 ;
    printf("%d",res);
    
    

    return 0;
}
