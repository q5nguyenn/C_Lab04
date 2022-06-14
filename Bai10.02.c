#include <stdio.h>

void main (void)
{
	int i, j, h;
	printf ("\nNhap chieu cao cua hinh tam giac: ");
	scanf ("%d", &h);
	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= i; j++ )
			printf ("%d", j);	
		printf ("\n");
	}
}
		

