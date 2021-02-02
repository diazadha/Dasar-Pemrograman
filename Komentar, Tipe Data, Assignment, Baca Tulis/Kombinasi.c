#include <stdio.h>

/*****************************
Program Kombinasimakanandanminuman
Deskripsi : Mendapatkan input jenis minuman dan makanan
IS : User siap menginput jenis dan kombinasi minuman
FS : Di layar tertulis jenis dan kombinasi

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 5 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int m, n, kombinasi;
//ALGORITMA
	scanf ("%d", &m);
	scanf ("%d", &n);
	printf ("Banyak jenis minuman = %d\n", m);
	printf ("Banyak jenis makanan = %d\n", n);
	kombinasi = m * n;
	printf ("Banyak kombinasi = %d\n", kombinasi);
	
	system ("PAUSE");
}
