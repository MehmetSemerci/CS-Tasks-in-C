#include <stdio.h>

int main(){
	int x,newe=0,i=1;
	
	printf("Enter an integer:");
	scanf("%d",&x);
	
	printf("Your number is:");
	
	while(x>0){		
		printf("%d",x%10);	
		x/=10;			
	}
	
	return 0;
}


