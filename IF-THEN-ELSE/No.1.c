#include <stdio.h>

/************************
Program NilaiLebihBesar2Angka
Deskripsi : Membandingkan 2 bilangan bulat, menenteukan yang terbesar
IS : Pengguna siap memasukkan 2 bilangan bulat
FS : Nilai terbesar dari 2 angka yang dimasukkan

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 10 November 2018
**************************/

void main (void)

//KAMUS
{	int a, b;
//ALGORITMA
	printf ("Masukkan nilai a = ");
	scanf ("%d", &a);
	printf ("Masukkan nilai b = ");
	scanf ("%d", &b);
	
	if (a>b)
	{
		printf ("nilai terbesar adalah a = %d\n", a);
	}
	else //a<b
	{
		printf ("nilai terbesar adalah b = %d\n", b);
	}
	system ("PAUSE");
}

