#include <stdio.h>

/*****************************
Program Jumlahsisigraf
Deskripsi : Mendapatkan input jumlah sisi graf lengkap
IS : User siap menginput jumlah simpul graf lengkap
FS : Di layar tertulis jumlah sisi graf lengkap

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 5 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int s, sisi;
//ALGORITMA
	scanf ("%d", &s);
	
	printf ("Jumlah simpul graf lengkap = %d\n", s);
	sisi = (s * (s-1)) / 2;
	printf ("Jumlah sisi graf lengkap = %d\n", sisi);
	
	system ("PAUSE");
}
