#include <stdio.h>

int main(){
	
	int num;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	if(num==2){
		printf("PRIME");
		return 0;
	}
			
	int i,count=0;
	for(i=2;i<num/2;i++){
		if(num%i==0){
			count++;
			printf("Not Prime");
			return 0;
		}
	}
	
	if(count==0){
		printf("PRIME");
	}

	return 0;
}

