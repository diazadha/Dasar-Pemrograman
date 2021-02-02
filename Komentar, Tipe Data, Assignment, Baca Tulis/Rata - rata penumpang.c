#include <stdio.h>

/*****************************
Program Rata-ratapenumpang
Deskripsi : Mendapatkan rata - rata penumpang dalam 1 gerbong
IS : User siap menginput total penumpang dan gerbong
FS : Tampil di layar : Rata - rata penumpang

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 5 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int p, g, Ratarata;
//ALGORITMA
	scanf ("%d", &p);
	scanf ("%d", &g);
	printf ("Jumlah penumpang = %d\n", p);
	printf ("Jumlah gerbong = %d\n", g);
	Ratarata = p/g;
	printf ("Rata - rata penumpang = %d\n", Ratarata);
	
	system ("PAUSE");
}
