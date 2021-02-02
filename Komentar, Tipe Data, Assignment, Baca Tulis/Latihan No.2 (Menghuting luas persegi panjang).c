#include <stdio.h>

/*******************
Program Luaspersegipanjang
Deskripsi : Menghitung suatu luas dari persegi panjang
IS : ada 2 bilangan bulat
FS : hasil luas persegi panjang dengan rumus panjang * lebar

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 2 Oktober 2018
*********************/

void main(void)

//KAMUS ****************
{	int a, b, luaspersegipanjang ;

//ALGORITMA *************

	printf ("Tuliskan panjang persegi panjang = ");
	scanf ("%d", &a);
	printf ("Tuliskan lebar persegi panjang = ");
	scanf ("%d", &b);
	
	luaspersegipanjang = a * b;
	
	printf ("\nLuas Persegi Panjang = %d", luaspersegipanjang);
	printf ("\n");
	system ("PAUSE");
	
}
