#include <stdio.h>

/********************************
Program genap
Deskripsi : Mencetak bilangan genap sebanyak yag diinginkan user
IS : User siap menginput jumlah bilangan genap yag diinginkan
FS : Tampil di layar bilangan genap sebanyak n user
Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 1 Januari 2019
*********************************/

void main (void)

//KAMUS
{	int n, d, e;
//ALGORITMA
	printf ("Masukkan nilai n = ");
	scanf ("%d", &n);
	d=1;
	e=0;
	while (d<=n)
	{
		printf ("%d ", e);
		e=e+2;
		d=d+1;
	}
	printf ("\n");
	system ("PAUSE");
}
