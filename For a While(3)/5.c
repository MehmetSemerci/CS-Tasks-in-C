#include <stdio.h>

int main(){

	int x;
	float fact=1;
	
	printf("Enter an integer:");
	scanf("%d",&x);
	
	while(x>0){
		fact*=x;
		x--;
	}
	printf("Factorial is %.0f\n",fact);
	
	return main();
}

