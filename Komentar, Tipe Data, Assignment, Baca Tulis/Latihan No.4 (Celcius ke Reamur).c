#include <stdio.h>

/*******************
Program CelciusKeReamur
Deskripsi : Mengkonversi nilai derajat Celcius ke derajat Reamur
IS : angka derajat Celcius
FS : angka derajat Reamur dengan rumus R = (4*C)/5 

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 2 Oktober 2018
*********************/

void main(void)

//KAMUS ****************
{	float C, R;

//ALGORITMA *************

	printf ("Derajat Celcius =");
	scanf ("%f", &C);
	R = (4*C)/5;
	printf ("\nDerajat Reamur = %f\n", R);
	printf ("\n");
	system ("PAUSE");
	
}
