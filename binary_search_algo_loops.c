#include <stdio.h>

int main()
{
    
    int a[]={0,1,2,3,4,5};
    
    int check=9;
    
    int  right=(sizeof(a)/sizeof(a[1]))-1;
    
    int left=0;
    
    while(left<=right){
        
        int mid=(left+right)/2;
        
        if(a[mid]==check){
            
             printf("found at index %d",mid);
             return 0;
        }
        if(check<a[mid]){
            right=mid-1;
         }
         else{
            left=mid+1;
         }
    }
        
    printf("not found");
    
    
   
    return 0;
}
