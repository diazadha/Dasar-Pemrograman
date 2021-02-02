#include <stdio.h>

/*******************
Program Beratjenis 
Deskripsi : Menghitung berat jenis sebuah benda
IS : ada 2 bilangan real
FS : Hasil berat jenis sebuah benda dengan rumus berat/volume

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 2 Oktober 2018
*********************/

void main(void)

//KAMUS ****************
{	float a, b, beratjenis;

//ALGORITMA *************

	printf ("Berat benda = ");
	scanf ("%f", &a);
	printf ("Volume benda = ");
	scanf ("%f", &b);
	
	beratjenis = a/b;
	
	printf ("\nBerat jenis benda = %f kg/m3", beratjenis);
	printf ("\n");
	system ("PAUSE");
	
}
