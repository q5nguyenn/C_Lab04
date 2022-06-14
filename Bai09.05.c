#include <stdio.h>

void main (void)
{
	int i, j, h;
	printf ("\nNhap chieu cao cua hinh tam giac: \n");
	scanf ("%d", &h);
	for (i = h; i >= 1; i--)
	{
		for (j = 1; j <= i; j++ )
			printf ("*");	
		printf ("\n");
	}	
}
		

