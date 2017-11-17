#include <stdio.h>

int main(){
	int i,k,n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		for(k=0;k<(n-i-1);k++){
			printf(" ");
		}
		
		for(k=0;k<=i;k++){
			printf("*");
		}
		
		printf("\n");
	}
		
	return 0;
}

