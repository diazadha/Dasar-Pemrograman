#include <stdio.h>

/************************
Program NilaiLebihBesar3Angka
Deskripsi : Membandingkan 3 bilangan bulat, menenteukan yang terbesar
IS : Pengguna siap memasukkan 3 bilangan bulat
FS : Nilai terbesar dari 3 angka yang dimasukkan

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 10 November 2018
**************************/

void main (void)

//KAMUS
{	int a, b, c;
//ALGORITMA
	printf ("Masukkan nilai a = ");
	scanf ("%d", &a);
	printf ("Masukkan nilai b = ");
	scanf ("%d", &b);
	printf ("Masukkan nilai c = ");
	scanf ("%d", &c);
	
	if (a>b)
	{
		if (a>c)
		{
			printf ("Nilai terbesar adalah a = %d\n", a);
		}
		else //a<c
		{
			printf ("Nilai terbesar adalah c = %d\n", c);
		}	
		
	}
	else //a<b
	{
		if (b>c)
		{
			printf ("Nilai terbesar adalah b = %d\n", b);
		}
		else //b<c
		{
			printf ("Nilai terbesar adalah c = %d\n", c);
		}
	}
	system ("PAUSE");
}

