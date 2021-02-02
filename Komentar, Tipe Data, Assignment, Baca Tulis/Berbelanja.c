#include <stdio.h>

/*****************************
Program Berbelanja
Deskripsi : Mendapatkan input harga yang harus dibayar
IS : User siap memberikan input jumlah belanja dan diskon
FS : Tampil di layar : jumlah belanja,diskon,dan harga

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 5 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int j, d, Bayar;
//ALGORITMA
	scanf ("%d", &j);
	scanf ("%d", &d);
	printf ("Jumlah belanja =Rp.%d\n", j);
	printf ("Diskon = %d persen\n", d);
	Bayar = j - (j*d/100);
	printf ("Harga yang harus dibayar = %d\n", Bayar);
	
	system ("PAUSE");
}
