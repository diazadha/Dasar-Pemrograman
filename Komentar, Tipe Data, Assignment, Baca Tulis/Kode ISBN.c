#include <stdio.h>

/*****************************
Program Kode ISBN
Deskripsi : Mendapatkan input bilangan ke 10
IS : User siap menginput kode ISBN ke 1 hingga ke 9
FS : Tampil di layar : karakter uji atau bilangan ke 10

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 5 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int a, b, c, d, e, f, g, h, i, sepuluh;
//ALGORITMA
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	scanf ("%d", &d);
	scanf ("%d", &e);
	scanf ("%d", &f);
	scanf ("%d", &g);
	scanf ("%d", &h);
	scanf ("%d", &i);

	printf ("ISBN ke- 1 = %d\n", a);
	printf ("ISBN ke- 2 = %d\n", b);
	printf ("ISBN ke- 3 = %d\n", c);
	printf ("ISBN ke- 4 = %d\n", d);
	printf ("ISBN ke- 5 = %d\n", e);
	printf ("ISBN ke- 6 = %d\n", f);
	printf ("ISBN ke- 7 = %d\n", g);
	printf ("ISBN ke- 8 = %d\n", h);
	printf ("ISBN ke- 9 = %d\n", i);
	
	sepuluh = (1 * a) + (2 * b) + (3 * c) + (4 * d) + (5 * e) + (6 * f)	+ (7 * g) + (8 * h) + (9 * i);
	printf ("Bilangan ke- 10 = %d\n", sepuluh);
	system ("PAUSE");
	
}
