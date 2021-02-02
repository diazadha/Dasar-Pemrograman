#include <stdio.h>

/*******************
Program Luassegitiga
Deskripsi : Menghitung suatu luas dari segitiga
IS : ada 2 bilangan bulat
FS : hasil luas segitiga dengan rumus 1/2 * alas *  tinggi

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 2 Oktober 2018
*********************/

void main(void)

//KAMUS ****************
{	int a, b, luassegitiga ;

//ALGORITMA *************

	printf ("Alas segitiga = ");
	scanf ("%d", &a);
	printf ("Tinggi segitiga = ");
	scanf ("%d", &b);
	
	luassegitiga = a * b/2;
	
	printf ("\nLuas Segitiga = %d", luassegitiga);
	printf ("\n");
	system ("PAUSE");
	
}
