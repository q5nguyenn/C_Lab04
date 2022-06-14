#include <stdio.h>

int main (void)
{
	int i, n, n1 = 1, n2 = 1, n3;
	printf ("\nNhap vao so phan tu fibonaci muon in: ");
	scanf ("%d", &n);
	if (n == 1 )
		printf ("1");
	else if (n == 2)
		printf ("1 1");
	else
	{
		printf ("1 1 ");
		for (i = 3; i <= n; i++)
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
			printf ("%d ", n3);		
		}		
	}
	return 0;
}
