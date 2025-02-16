
#include <stdio.h>

int main()
{
    for(int i =1;i<=5;i++)
  {
      for(int k=1;k<=5-i+1;k++){
          printf(" ");
      }
      for (int j=1;j<=2*i-1 ;j++)
      {
          if(i==1 || j==1 || j==2*i-1  ){
              printf("*");
          }
          else{
              printf(" ");
          }
      }
      printf("\n");
  }
    
  for(int i =2;i<=5;i++)
  {
      for(int k=1;k<=i;k++){
          printf(" ");
      }
      for (int j=1;j<=2*(5-i+1)-1 ;j++)
      {
          if(j==1 || j==2*(5-i+1)-1 ){
              printf("*");
          }
          else{
              printf(" ");
          }
      }
      printf("\n");
  }
    return 0;
}
