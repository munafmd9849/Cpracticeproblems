#include <stdio.h>

int main()
{
    int a[]={10,20,50,30,25,40};
    for(int i=0;i<=5;++i){
        if(i==0 && a[i+1]<a[i]){
            printf("%d ",a[i]);
        }
        
        else if(i==5 && a[i-1]<a[i]){
            printf("%d ",a[i]);
        }
        
        else if(a[i-1]<a[i] && a[i+1]<a[i]){
            printf("%d ",a[i]);
        }
        
    }
    

    return 0;
}
