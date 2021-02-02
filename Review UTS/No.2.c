#include <stdio.h>

/***********************
Program BintangPagar
Deskripsi : Menampilkan bintang atau pagar
IS : Pengguna siap memasukkan pilihan
FS : Tampilkan bintang '***************' atau pagar '##############'

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 11 November 2018
************************/

void main (void)

//KAMUS
{	int Angka;
//ALGORITMA
	printf ("Masukkan pilihan = 1.bintang atau 2.pagar\n");
	scanf ("%d", &Angka);
	
	if (Angka==1)
	{
		printf ("***************\n");
	}
	else
	{
		printf ("##############\n");
	}
	system ("PAUSE");
}
