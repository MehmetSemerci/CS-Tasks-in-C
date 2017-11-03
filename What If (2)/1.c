#include <stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>50){
		printf("You are over 50");
	}
	
	else if(age<50&&age>0){
		printf("You are under 50");
	}

	else if(age==50){
		printf("You are 50");
	}
	
	else{
		printf("You are not living");
	}

	return 0;
}

