#include <stdio.h>

int main(){
	
	printf("Enter how many hours you worked:");
	int hours;
	scanf("%d",&hours);
	
	if(hours>0&&hours<=90){
		printf("Your salary is: %d TL",hours*20);
	}
	
	else if(90<=hours && hours<160){
		printf("Your salary is: %d TL",hours*30);
	}
	
	else if(hours>=160){
		printf("Your salary is: %d TL",hours*hours);
	}
	
	else{
		printf("You did not worked :(");
	}


	return 0;
}

