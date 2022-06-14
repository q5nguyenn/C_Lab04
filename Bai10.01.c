#include <stdio.h>

void main (void)
{
	int i, age;
	char name[30];
	printf ("\nNhap vao ten cua ban: ");
	gets (name);
	printf ("Nhap vao tuoi cua ban: ");
	scanf ("%d", &age);
	for (i = 1; i <= age; i++)
		printf ("%s ", name);
}
		

