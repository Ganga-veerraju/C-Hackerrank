#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    printf("%d %d\t", a+b, a-b);
    printf("\n%.1f %.1f\t", (c+d), (c-d));
    
    return 0;
}

