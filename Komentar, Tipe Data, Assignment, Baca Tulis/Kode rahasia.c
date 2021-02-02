#include <stdio.h>

/*****************************
Program Koderahasia
Deskripsi : Mendapatkan input kode rahasia
IS : Layar kosong, user menginput tanggal, bulan, tahun
FS : Di layar tertulis tanggal, bulan, tahun, dan kode rahasia

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 5 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int t, b, h, kode;
//ALGORITMA
	scanf ("%d", &t);
	scanf ("%d", &b);
	scanf ("%d", &h);
	printf ("Tanggal = %d\n", t);
	printf ("Bulan = %d\n", b);
	printf ("Tahun lahir = %d\n", h);
	kode = (5*t) + b + (h%10);
	printf ("Kode rahasia = %d\n", kode);
	
	system ("PAUSE");
}
