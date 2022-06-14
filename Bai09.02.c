#include <stdio.h>

int main (void)
{
	int i, num1, num2, tong  = 0, tam;
	printf ("\nNhap vao so thu nhat: ");
	scanf ("%d", &num1);
	printf ("Nhap vao so thu hai: ");
	scanf ("%d", &num2);
	if (num1 > num2)
	{
		num1 = tam;
		num1 = num2;
		num2 = tam;
	}
	for (i = num1; i <= num2; i++)
	{
		if (i % 2 != 0)
		tong = tong + i;
	}
	printf ("Tong cua cac so le nam giua hai so %d va %d la: %d", num1, num2, tong);
	return 0;
}
