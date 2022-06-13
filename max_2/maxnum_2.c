#include <stdio.h>

int main(){
	
	int a, b, max;
	char maxc;
	
	printf("Enter two number please ");
	
	printf("\na : ");
	scanf("%d", &a);
	
	printf("\nb : ");
	scanf("%d", &b);
	
	max = a > b ? a : b;
	maxc = a > b ? 'a' : 'b';
	
	printf("\nBigger number %c, equal to %d.", maxc, max);
	
}

