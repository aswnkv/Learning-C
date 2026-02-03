#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i,j;
    float k,l;
    scanf("%d %d", &i, &j);
    scanf("\n");
    scanf("%f %f", &k, &l);
    printf("%d %d", i + j, i-j);
    printf("\n");
    
    printf("%.1f %.1f", l + k,k-l);
    
    return 0;
}