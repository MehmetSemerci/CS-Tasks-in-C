#include <stdio.h>

int main(){
	
	int a,b,small;
	int GCD=1;
	
	printf("Enter two integer:");
	scanf("%d %d",&a,&b);
	
	if(a<b)
		small = a;
	else if(a>b) 
		small = b;
	else{
		printf("GCD = %d",a);
		return 0;
 	}
		
	int i;
	
	for(i=2;i<=small;i++){
		
		if(a%i==0 && b%i==0){
			a=a/i;
			b=b/i;
			GCD=GCD*i;
		}		
	}
	
	printf("GCD is:%d",GCD);
	
	return 0;
}

