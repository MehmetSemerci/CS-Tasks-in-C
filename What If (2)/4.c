#include <stdio.h>

int main(){
	
	printf("Enter an integer:");
	int x;
	scanf("%d",&x);
	
	if(x%2) printf("Odd");
	else printf("Even");


	return 0;
}

