#include <stdio.h>

/********************************
Program YaTidak
Deskrpsi : Menentukan Jawaban
IS : Pengguna siap memasukkan jawaban y atau t
FS : Menampilkan 'ya' jika jawaban 'y', menampilkan 'Tidak' jika jawaban 't'

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 11 November 2018
**********************************/

void main (void)

//KAMUS
{	int Angka;
//ALGORITMA
	printf ("Masukkan jawaban = 1.y atau 2.t\n");
	scanf ("%d", &Angka);
	
	if (Angka==1)
	{
		printf ("ya\n");
	}
	else
	{
		printf ("tidak\n");
	}
	system ("PAUSE");
}
