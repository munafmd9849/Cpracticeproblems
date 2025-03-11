#include <stdio.h>
void change(int left,int right,int array[]){
    
    if(left>=right){
        printf("%d %d %d %d %d ",array[0],array[1],array[2],array[3],array[4]);

        return;
    }
    else{
        
    int temp=array[left];
    array[left]=array[right];
    array[right]=temp;
    left++;
    right--;
    change(left,right,array);
    
    }
    }
int main()
{
   int array []={0,1,2,3,4};
   
   change(0,4,array);
  
    return 0;
}

