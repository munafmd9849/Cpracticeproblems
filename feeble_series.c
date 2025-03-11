#include <stdio.h>

  int main(){
   int num1=0;
   int num2=1;
   int num3=num1+num2;
   printf("%d %d %d ",num1,num2,num3);

   for( int i=0; i<=2; i++){
      num1=num2;
      num2=num3;
      num3=num1+num2;
      printf("%d ",num3);
   }
   
   return 0;;
 }
