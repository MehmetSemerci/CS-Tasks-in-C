#include <stdio.h>

int main(){
	
	int a1,a2,a3,b1,b2,b3,c1,c2,c3;
	
	printf("Enter the first line of the matrix:");
	scanf("%d %d %d",&a1,&a2,&a3);
	
	printf("Enter the second line of the matrix:");
	scanf("%d %d %d",&b1,&b2,&b3);
	
	printf("Enter the third line of the matrix:");
	scanf("%d %d %d",&c1,&c2,&c3);
	
	if((a1*b2*c3+a3*b2*c1)<0)
		printf("Result is %d",-1*(a1*b2*c3+a3*b2*c1));
	else
		printf("Result is %d",(a1*b2*c3+a3*b2*c1));

	return 0;
}

