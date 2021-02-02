#include <stdio.h>

/**************************
Program PemilihanKetua
Deskripsi : Menentukan ketua berdasarkan skor akhir
IS : Pengguna siap memasukkan data skor mentah seorang calon ketua
FS : Menampilkan skor seorang calon ketua dengan rumus bobot:
		Skor Akhir = 40 % SkorKepemimpinan + 40 % skorVisi + 20 % skorKerajinan
Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 11 November 2018
***************************/

void main (void)

//KAMUS
{	int SA, SK, SV, SKE;
//ALGORITMA
	printf ("Skor kepemimpinan = ");
	scanf ("%d", &SK);
	printf ("Skor visi = ");
	scanf ("%d", &SV);
	printf ("Skor kerajinan = ");
	scanf ("%d", &SKE);
	
	SA = (0.4 * SK) + (0.4 * SV) + (0.4 *SKE);
	
	printf ("Skor akhir = %d\n", SA);
	system ("PAUSE");
}
