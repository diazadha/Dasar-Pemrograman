#include <stdio.h>
#include <stdlib.h>

/*************************
Deskripsi : Menghitung penjualan masing - masing merk susu dan merk susu mana yang paling digemari pembeli
IS : Input : jumlah pembeli dan untuk setiap pembeli disebutkan satu merk susu yang dibelinya.
FS : Jumlah pembelian masing - masing merk susu, dan merk susu yang paling digemari pelanggan

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 31 Januari 2019
**************************/

void main (void)

//KAMUS
{	int jumlahpembeli, i, A, B, C, D;
	char merk[100];
//ALGORITMA
	A=0;
	B=0;
	C=0;
	D=0;
	printf ("Berapa banyak jumlah pembeli : ");
	scanf ("%d", &jumlahpembeli);
	for (i=1;i<=jumlahpembeli;i++)
	{
		printf ("Merk susu : ");
		scanf ("%s", &merk);
		if (strcmp(merk, "SGN") ==0)
		{
			A=A+1;
		}
		else
		{
			if (strcmp(merk, "DENKAU") ==0)
			{
				B=B+1;
			}
			else
			{
				if (strcmp(merk, "BEBELAK") ==0)
				{
					C=C+1;
				}
				else
				{
					D=D+1;
				}
			}
		}
	}
	
	printf ("Jumlah pembelian susu SGN = %d", A);
	printf ("\nJumlah pembelian susu DENKAU = %d", B);
	printf ("\nJumlah pembelian susu BEBELAK = %d", C);
	printf ("\nJumlah pembelian susu HAILO = %d\n", D);
	
	if (A>B)
	{
		printf ("SGN PALING BANYAK DIGEMARI YAITU SEBANYAK %d", A);
	}
	else
	{
		if (B>C)
		{
			printf ("DENKAU PALING BANYAK DIGEMARI YAITU SEBANYAK %d", B);
		}
		else
		{
			if (C>D)
			{
				printf ("BEBELAK PALING BANYAK DIGEMARI YAITU SEBANYAK %d", C);
			}
			else
			{
				if (D>A&D>B&D>C)
				{
					printf ("HAILO PALING BANYAK DIGEMARI YAITU SEBESAR %d", D);
				}
			}
		}
	}
	printf ("\n\n");
	system ("PAUSE");
}
