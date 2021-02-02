#include <stdio.h>

/************************
Program Transportasi
Deskripsi : Menentukan model transportasi yang akan dipakai 
IS : Pengguna siap memasukkan data waktu, acara, jumlah orang
FS : Menampilkan model transportasi yang tepat
		Jika cuma sendiri, nak kereta, tak peduli acara dan waktunya
		Jika waktunya pagi hari naik mobil pribadi
		Jika acaranya resmi maka naik mobil pribadi
		Jika berdua atau bertiga lebih baik naik taksi
		Selainya adalah naik bis

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 11 November 2018
***************************/

void main (void)

//KAMUS
{	int J;
	char w[100], a[100];
//ALGORITMA
	printf ("Waktu (Pagi atau lainya) = ");
	scanf ("%s", &w);
	printf ("Acara (Resmi atau lainya) = ");
	scanf ("%s", &a);
	printf ("Jumlah orang = ");
	scanf ("%d", &J);
	
	if (J==1)
	{
		printf ("Naik kereta\n");
	}
	else
	{
		if ((strcmp (w, "Pagi") ==0) || (strcmp (a, "Resmi") ==0)
		{
			printf ("Naik mobil pribadi\n");
		}
		else
		{
			if (J==2 || J==3)
			{
				printf ("Lebih baik naik taksi\n");
			}
			else
			{	
				printf ("Naik bis\n");
			}
		}
		
	}


	system ("PAUSE");
}
	
