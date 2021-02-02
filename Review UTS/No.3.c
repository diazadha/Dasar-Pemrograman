#include <stdio.h>

/***************************
Program Kelipatan3
Deskripsi : Menentukan kelipatan 3 atau tidak
IS : Pengguna siap memasukkan angka integer
FS : Kelipatan 3 atau bukan
petunjuk : dapat menggunakan operasi mod

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 11 November 2018
****************************/

void main (void)

//KAMUS
{	int a;
//ALGORITMA
	printf ("Masukkan angka = ");
	scanf ("%d", &a);
	
	if (a %3==0)
	{
		printf ("Kelipatan 3\n");
	}
	else
	{
		printf ("Bukan kelipatan 3\n");
	}
	system ("PAUSE");
}
