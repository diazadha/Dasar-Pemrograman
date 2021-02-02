#include <stdio.h>

/*****************************
Program Kardinalitashimpunan
Deskripsi : Menghitung kardinalitas himpunan kuasa
IS : User siap memberikan input jumlah kardinalitas A
FS : Tampil di layar jumlah kardinalitas himpunan kuasa

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 4 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int n, HimpunankuasaA;
//ALGORITMA
	scanf ("%d", &n);
	printf ("Kardinalitas A = %d\n", n);
	HimpunankuasaA = pow (2,n);
	printf ("Himpunan kuasa A = %d\n", HimpunankuasaA);
	
	system ("PAUSE");
}
