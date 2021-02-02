#include <stdio.h>

/*****************************
Program Jumlahsisipohon
Deskripsi : Mendapatkan jumlah sisi pada pohon
IS : User siap menginput jumlah simpul pada pohon
FS : Di layar tampil jumlah sisi pada pohon

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 5 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int s, sisi;
//ALGORITMA
	scanf ("%d", &s);
	
	printf ("Jumlah simpul pada pohon = %d\n", s);
	sisi = s - 1;
	printf ("Jumlah sisi pada pohon = %d\n", sisi);
	
	system ("PAUSE");
}
