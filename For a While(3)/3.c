#include <stdio.h>

int main(){
	long long int x;  // int maksimum 10 digit tutabildi�i i�in long long int kullan�ld�
	int i=1;
	
	printf("Enter an integer:");
	scanf("%lli",&x);
		
	while(x>10){		
		x/=10;
		i++;		
	}
	printf("%d digit(s)",i);
	
	

	return 0;
}
