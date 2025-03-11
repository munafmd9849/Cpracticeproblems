
#include <stdio.h>

int main()
{
    char a;
    
    printf("enter the day\n");
    
    scanf("%s",&a);
    
    if(a=='s'){
        printf("weekend");
        return 0;
    }
            
    if(a=='m'||a=='t'||a=='f'||a=='w'){
        printf("weekday");
        
    }
   
    else{
        printf("invalid input");
    }

    return 0;
}
