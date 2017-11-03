#include <stdio.h>

int main(){
	
	int speed;
	
	printf("Enter the speed:");
	scanf("%d",&speed);
	
	if(speed>80){
		printf("Penalty is:%d TL",(speed-80)*15);
	}
	else if(speed>0&&speed<=80){
		printf("There is no penalty");
	}
	else{
		printf("Are u testing me ?");
	}


	return 0;
}

