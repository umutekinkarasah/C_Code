#include <stdio.h>

int main(){
	
	int x, y, z, max;

	printf("lutfen 3 sayi girin : ");       
	scanf("%d%d%d", &x, &y, &z);
	max = max3(x,y,z);
	printf("%d %d %d sayilarinin, en buyuk olani %d", x, y, z, max);
	
} 

int max3 (int x, int y, int z){
	
	int max = z;	
	 
	if (x > y && x > z)
		max = x;
	
	if (y > x && y > z)
		max = y;
	
	return max;	

}


