
#include <stdio.h>

int main()
{
	int num;
	int i=1;
	int fact=1;

	printf("Enter te number: ");
	scanf("%d",&num);
	
	if(num<0){
	    printf("No Factorial For Negative Numbers");
	    return 0;
	}
	
	else if(num==0){
	    printf("%d",1);
	    return 0;
	} 
	else{

	while(i<=num) {
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
	
	}
	return 0;
	
	
}
