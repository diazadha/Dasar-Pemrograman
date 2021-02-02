#include <stdio.h>

/********************************
Program jumlahbilangangenap
Deskripsi : Mencetak jumlah bilangan genap sebanyak yang diinginkan user
IS : User siap menginput jumlah bilangan genap yang diinginkan
FS : Tampil di layar hasil perjumlahan semua bilangan genap sebanyak n user
Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 1 Januari 2019
*********************************/

void main (void)

//KAMUS
{	int n, a, b, f;
//ALGORITMA
	printf ("Masukkan nilai n = ");
	scanf ("%d", &n);
	a=1;
	b=0;
	f=0;
	while (a<=n)
	{
		printf ("%d ", b);
		f=f+b;
		b=b+2;
		a=a+1;
	}
	printf ("\nJumlah bilangan genap diatas adalah %d", f);
	printf ("\n");
	system ("PAUSE");
}
