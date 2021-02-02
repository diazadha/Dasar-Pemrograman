#include <stdio.h>

/********************************
Program bintangsegitiga
Deskripsi : Mencetak segitiga siku siku bintang sebanyak yang diinginkan user
IS : User siap menginput jumlah bintang yang diinginkan
FS : Tampil di layar segitiga siku siku bintang sebanyak n user
Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 1 Januari 2019
*********************************/

void main (void)

//KAMUS
{	int n, b, c;
//ALGORITMA
	printf ("Masukkan nilai n = ");
	scanf ("%d", &n);
	b = 1;
	while (b<=n)
	{
		c=1;
		while (c<=b)
		{
			printf ("*");
			c=c+1;
		}
		printf ("\n");
		b=b+1;
	}
	system ("PAUSE");
}
