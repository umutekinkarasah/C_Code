#include <stdio.h>

int main()
{
	int x, y, z;

	printf("uc tamsayi giriniz: ");
	scanf("%d%d%d", &x, &y, &z);


    if(x == y && y == z){
        printf("%d = %d  = %d", x, y, z);
    }

    else{


        if (x > y && x > z && y != z){
            if (y > z)
                printf("%d < %d < %d", z, y, x);
            else
                printf("%d < %d < %d", y, z, x);
        }

        if (x == y ){
                if (z > y)
                printf("%d = %d < %d", x, y, z);
                else
                printf("%d = %d > %d", x, y, z);
            }

        if (x == z ){
                if (y > z)
                printf("%d = %d < %d", x, z, y);
                else
                printf("%d = %d > %d", x, z, y);
            }
        if (y == z ){
                if (x > z)
                printf("%d = %d < %d", y, z, x);
                else
                printf("%d = %d > %d", y, z, x);
            }

    }

}

