#include <stdio.h>

/********************************
Program jumlahbilangangenap
Deskripsi : Mencetak jumlah bilangan genap sampai batas yang diinginkan user
IS : User siap menginput batas jumlah bilangan genap yang diinginkan
FS : Tampil di layar hasil perjumlahan semua bilangan genap
Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 6 Januari 2019
*********************************/

void main (void)

{
//KAMUS
	int n, a, b;
//ALGORITMA
	printf ("Masukkan batas bilangan genap = ");
	scanf ("%d", &n);
	a=0;
	b=0;
	while (a<=n)
	{
		printf ("%d ", a);
		b=b+a;
		a=a+2;
	}
	//a>n
	printf ("\nJumlah bilangan genap adalah %d\n", b);
	
	system ("PAUSE");
}
