#include <stdio.h>

#define PIN 123
#define ID 456

int main (void)
{
	int pin, cardid, i, tienrut, tienck;
	int tienconlai = 1000000000;
	printf ("Nhap vao ma pin: ");
	scanf ("%d", &pin);
	printf ("Nhap vao Card ID: ");
	scanf ("%d", &cardid);
	if ( pin == PIN && cardid == ID)
	{
		printf ("--------------------------\n");
		printf ("1. Rut tien.\n");
		printf ("2. Chuyen khoan.\n");
		printf ("3. Xem so du.\n");
		printf ("4. Ket thuc chuong trinh.\n");
		printf ("--------------------------\n");
		scanf ("%d", &i);
		if (i == 1)
		{
			printf ("Ban rut bao nhieu tien: ");
			scanf ("%d", &tienrut);
			printf ("Ban da rut %dvnd! ", tienrut);
		}
		else if (i == 2)
		{
			printf ("Ban chuyen khoan bao nhieu tien: ");
			scanf ("%d", &tienck);
			printf ("Ban da chuyen %dvnd! ", tienck);
		}	
		else if (i == 3)
			printf ("So du hien tai cua ban la: %d vnd", tienconlai);
		else if (i == 4)
			printf ("Hen gap lai lan sau!");
		else printf ("Ban can chon theo menu.");
	}
	else printf ("Nhap sai!");
}
