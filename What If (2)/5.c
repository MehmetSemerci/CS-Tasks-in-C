#include <stdio.h>

int main(){
	
	int a,b;
	
	printf("Enter an integer:");
	scanf("%d",&a);
	
	printf("Enter another integer:");
	scanf("%d",&b);
	
	if((a+b)<0) 
		printf("|(%d)+(%d)|:%d",a,b,-1*(a+b));
	
	else 
		printf("|(%d)+(%d)|:%d",a,b,(a+b));


	return 0;
}

