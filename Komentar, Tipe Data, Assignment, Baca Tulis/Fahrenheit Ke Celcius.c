#include <stdio.h>

/*******************
Program FahrenheitKeCelcius
Deskripsi : Mengkonversi nilai derajat Fahrenheit ke derajat Celcius
IS : angka derajat Fahrenheit
FS : angka derajat Celcius dengan rumus C = (5/9) * (F - 32) 

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 2 Oktober 2018
*********************/

void main(void)

//KAMUS ****************
{	float F, C;

//ALGORITMA *************

	printf ("Derajat Fahrenheit = ");
	scanf ("%f", &F);
	C = (5.0 / 9.0) * (F - 32);
	printf ("\nDerajat Celcius = %f\n", C);
	printf ("\n");
	system ("PAUSE");
	
}
