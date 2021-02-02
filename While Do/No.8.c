#include <stdio.h>

/********************************
Program faktorial
Deskripsi : Menghitung faktorial n yang diinput user
IS : User siap menginput nilai n
FS : Tampil di layar hasil faktorial
Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 6 Januari 2019
*********************************/

void main (void)

{
//KAMUS
	int n, i, b;
//ALGORITMA
	printf ("Masukkan nilai n faktorial = ");
	scanf ("%d", &n);
	
	i=1;
	b=1;
	while (i<=n)
	{
		b=b*i;
		printf ("%d! = %d\n", i, b);
		i=i+1;
	}
	
	printf ("Nilai faktorial dari %d adalah %d\n", n, b);
	system ("PAUSE");
	
}
