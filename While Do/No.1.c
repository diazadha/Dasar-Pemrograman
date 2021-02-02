#include <stdio.h>

/********************************
Program bintang
Deskripsi : Mencetak bintang ke samping sebanyak yang diinginkan user
IS : User siap menginput jumlah bintang yang diinginkan
FS : Tampil di layar bintang sebanyak n user
Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 1 Januari 2019
*********************************/

void main (void)

//KAMUS
{	int n, a;
//ALGORITMA
	printf ("Masukkan nilai n = ");
	scanf ("%d", &n);
	
	a = 1;
	while (a<=n)
	{
		printf ("*");
		a = a+1;
	}
	printf ("\n");
	system ("PAUSE");
}
