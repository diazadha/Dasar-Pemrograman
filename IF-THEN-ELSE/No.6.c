#include <stdio.h>

/**************************
Program IndeksmMassaTubuh
Deskripsi : Menghitung Indeks Massa Tubuh
IS : Pengguna menginput Tinggi Badan dan Berat Badan
FS : Menampilkan hasil Indeks Massa tubuh

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 10 November 2018
***************************/

void main (void)

//KAMUS
{	float t, b, IMS;
//ALGORITMA
	printf ("Tinggi badan = ");
	scanf ("%f", &t);
	printf ("Berat badan = ");
	scanf ("%f", &b);
	
	IMS = (b / (t * t));
	
	printf ("IMS (Indeks Massa Tubuh) = %f\n", IMS);
	
	if (IMS < 18.5)
	{
		printf ("Kurus\n");
	}
	else
	{
		if (IMS <= 22.9)
		{
			printf ("IDEAL\n");
		}
		else
		{
			if (IMS <= 24.9)
			{
				printf ("overweight\n");
			}
			else
			{
				printf ("obesity\n");
			}
		}
	}
	system ("PAUSE");
}
