#include <stdio.h>

int main(){

	float r;
	
	printf("Enter the radius:");
	scanf("%f",&r);
	
	printf("Volume is:%.2f",4*3.14*r*r*r/3);
	return 0;
}

