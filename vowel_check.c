#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case '0':
        case 'u':printf("vowel");break;
        
        default:printf("consonent");break;
    }

    return 0;
}
