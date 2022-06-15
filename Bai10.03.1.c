#include <stdio.h>
#include <string.h>

void main (void)
{
	int i = 1, n;
	printf ("\nNhap vao bang cuu chuong can in: ");
	scanf ("%d", &n);
	while (i <= 9)
	{
		printf ("\t%d x %d = %d\n", n, i, n * i);
		i++;
	}
}
		

