#include <stdio.h>

/********************************
Program rata - rata
Deskripsi : Menghitung rata rata dari bilangan bulat yang diinput user
IS : User siap menginput banyaknya bilngan bulat
FS : Tampil di layar hasil rata rata
Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 6 Januari 2019
*********************************/

void main (void)

{
//KAMUS
	int a, b, d;
	float jumlah, c, hasil;
//ALGORITMA
	printf ("Banyakya bilangan bulat = ");
	scanf ("%d", &d);
	b=1;
	a=1;
	jumlah=0;
	
	while (b<=d)
	{
		printf ("Bilangan bulat ke %d = ", a);
		scanf ("%f", &c);
		jumlah = jumlah + c;
		a = a+1;
		b = b+1;
	}
	hasil = jumlah/d;
	printf ("Rata - ratanya adalah %f\n", hasil);
	system ("PAUSE");
}
