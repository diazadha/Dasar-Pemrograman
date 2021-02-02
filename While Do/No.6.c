#include <stdio.h>

/********************************
Program char
Deskripsi : Membaca berulang ulang input user (char) dan mencetaknya di layar, berhenti jika menginput pagar 
IS : User siap menginput char
FS : Tampil di layar secara berulang apa yang diinputkan
Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 6 Januari 2019
*********************************/

void main (void)
{
//KAMUS
	char d, e;
//ALGORITMA
	printf ("Masukkan huruf/angka = ");
	scanf ("%c", &d);
	scanf ("%c", &e);
	
	while (d!='#')
	{
		printf ("%c", d);
		printf ("\nMasukkan huruf / angka = ");
		scanf ("%c", &d);
		scanf ("%c", &e);
	}
	printf ("\n");
	system ("PAUSE");
}
