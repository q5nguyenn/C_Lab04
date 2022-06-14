#include <stdio.h>

void main (void)
{
	int count, min, max;
	printf ("max = ");
	scanf ("%d", &max);
	printf ("min = ");
	scanf ("%d", &min);	
	for (count = min; count <= max; count ++)
	{
		if (count % 2 == 0) 
		printf ("%d \n", count);
	}

}
