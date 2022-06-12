
#include <stdio.h>
int main()
{
    int u, m, t, largest;
  
    printf("Enter three numbers: ");
    scanf("%d %d %d", &u, &m, &t);
  
    largest = u > m ? (u > t ? u : t) : (m > t ? m : t);
  
    printf("%d is the largest number.", largest);
  
    return 0;
}


