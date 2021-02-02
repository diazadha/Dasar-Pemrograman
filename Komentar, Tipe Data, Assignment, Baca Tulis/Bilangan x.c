#include <stdio.h>

/*****************************
Program Inputoutputlayar
Deskripsi : Mendapatkan input bilangan x
IS : Layar kosong, user siap memberikan input angka
FS : Di layar tertulis bilangan x dengan fungsi y = x^2 - 4

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal 4 Oktober 2018
*****************************/

void main (void)

//KAMUS
{	int x, y;
//ALGORITMA
	scanf ("%d", &x);
	printf ("Nilai x = %d\n", x);
	y = (x * x) - 4;
	printf ("Nilai fungsi y adalah = %d\n", y);
	
	system ("PAUSE");
}
