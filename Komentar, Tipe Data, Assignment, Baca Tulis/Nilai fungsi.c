#include <stdio.h>

/*****************************
Program Nilaifungsi
Deskripsi : Mendapatkan input nilai fungsi
IS : Layar kosong, User siap menginput nilai kunci
FS : Di layar tertulis nlai key dan nilai fungsi

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 5 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int k, hash;
//ALGORITMA
	scanf ("%d", &k);
	
	printf ("Nilai key = %d\n", k);
	
	hash = k %11;
	printf ("Nilai fungsi = %d\n", hash);
	
	system ("PAUSE");
}
