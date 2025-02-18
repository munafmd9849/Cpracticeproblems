#include <stdio.h>

int main() {

   for(int i=1;i<=7;++i){
        for(int j=1;j<=7;j++){
            if(j==1 && i!=1 || j==7 && i!=1
            || i==4 || i==1 && j!=1  && j!=3 && j!=5 &&
            j!=7 ){
                
                printf("*");
            }
           else{
               printf(" ");
           }
        }
        printf("\n");

   }
        printf("\n");
        printf("\n");
   
   
   for(int i=1;i<=7;++i){
        for(int j=1;j<=7;j++){
            if(j==1 || i==7 && j!=7 || j==7 && i!=1 && i!=7
            || i==4 || i==1 && j!=7){
                
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
