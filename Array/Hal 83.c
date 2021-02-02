#include <stdio.h>
#include <stdlib.h>

/******************************
Program Array
Deskripsi : Mengolah array

IS : Nilai integer dalam array dibaca dari user
FS : Hasil pengolahan array tampil di layar

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 11 Januari 2019

*****************************************/

main (void)

//KAMUS
{
	int A[8], i, j, x, min, indeks; //indeks array A mulai dari 0 hingga 7
	int genap, sisa, indeks_baris, indeks_kolom;
	int matriks [2+1] [3+1] = { {999, 999, 999, 999},
								{999, 1, 2, 3},
								{999, 4, 5, 6} };
//ALGORITMA
	printf ("\n \n");
	//Menampilkan isi array matriks di layar
	for (i=1; i<=2; i++)
	{
		for (j=1; j<=3; j++)
		{
			printf ("nilai matriks [%d, %d] = %d\n", i, j, matriks[i][j]);
		}
	}
	
	printf ("\n\n");
	//Menampilkan isi array matriks dalam bentuk matriks
	for (i=1; i<=2; i++)
	{
		for (j=1; j<=3; j++)
		{
			printf ("%d  ", matriks[i][j]);
		}
		printf ("\n");
	}
	printf ("\n\n");
	//Mencari nilai terendah dari matriks
	min = 99999;
	indeks_baris = 0;
	indeks_kolom = 0;
	for (i=1; i<=2; i++)
	{
		for (j=1; j<=3; j++)
		{
			if (min > matriks[i][j])
			{
				min = matriks[i][j];
				indeks_baris = i;
				indeks_kolom = j;
			}
		}
	}
	printf ("Nilai terendah ada pada matriks [%d, %d] = %d \n", indeks_baris, indeks_kolom, min);
	//Meminta masukan dari user untuk array A[8]
	for (i=1; i<=7; i++)
	{
		printf ("Masukkan nilai A[%d] = ", i);
		scanf ("%d", &x);
		A[i] = x;
	}
	printf ("\n \n");
	//Menampilkan isi array A di layar
	for (i=1; i<=7; i++)
	{
		printf ("Nilai A[%d] = %d \n", i, A[i]);
	}
	//Mencari nilai terendah
	min = A[1];
	indeks = 1;
	for (i=2; i<=7; i++)
	{
		if (min > A[i])
		{
			min = A[i];
			indeks = i;
		}
	}
	printf ("\n Nilai terendah adalah = %d \n", min);
	printf ("Berada pada elemen array A ke %d \n", indeks);
	
	printf ("\n \n");
	//Mencari jumlah elemen array yang genap
	genap = 0;
	for (i=1; i<=7; i++)
	{
		sisa = A[i] % 2;
		if (sisa==0)
		{
			genap = genap + 1;
		}
	}
	printf ("\nJumlah nilai yang genap adalah = %d \n", genap);
	system ("PAUSE");
}
								
