#include <stdio.h>

int main(){
	int x,bin=0,i=1;
	
	printf("Enter an integer:");
	scanf("%d",&x);
	
	while(x>0){
		
		bin=bin+((x%2)*i);
        x=x/2;        
		i=i*10;
		
	}
	printf("The binary value is:%d",bin);
	
	


	return 0;
}

