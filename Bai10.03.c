#include <stdio.h>
#include <string.h>

void main (void)
{
	int i, n;
	printf ("\nNhap vao bang cuu chuong can in: ");
	scanf ("%d", &n);
	for (i = 1; i <= 9; i++)
		printf ("\t%d x %d = %d\n", n, i, n * i);
}
		

