#include <stdio.h>

int main(){
	int i=0,x=0,sum=0;
	
	while(x!=-1){
	
		printf("Enter an integer:");
		scanf("%d",&x);
		if(x!=-1){			
			i++;
			sum+=x;			
		}
		
	}
	printf("Sum is : %d   Average is : %.1f",sum,1.0*sum/i);
		
		
		
	


	return 0;
}

