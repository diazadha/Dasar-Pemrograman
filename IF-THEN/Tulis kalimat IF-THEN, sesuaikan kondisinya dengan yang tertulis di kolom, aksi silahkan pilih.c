#include <stdio.h>
#include <stdlib.h>

/*************************
Program IF-THEN
Deskripsi : Program ini berisi 4 statement IF-THEN sebagai latihan mk Alpro

IS : Pengguna siap memberi masukan yang diminta
FS : Tampilan di layar, menampilkan hasil eksekusi kalimat IF-THEN

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 26 Oktober 2018
**************************/

void main (void)
//KAMUS
	//KAMUS ALGORITMA 1
{	int A, jumlah, Jumlah;
	//KAMUS ALGORITMA 2
	char Jawab[100];
	int n, J;
	//KAMUS ALGORITMA 3
	int B, k, x, y, Hasil;
	//KAMUS ALGORITMA 4
	int z, hasil;
	char q[100];
//ALGORITMA
	//ALGORITMA 1 : kondisi A>15
	printf ("****************************\n"
	 		"ALGORIRMA 1 : kondisi (A>15)\n"
			"****************************\n");
	printf ("Masukkan nila A= ");
	scanf ("%d", &A);
	
	if (A>15)
	{
		scanf ("%d", &jumlah);
		Jumlah = jumlah + 1;
	}
	printf ("\n\n");
	
	//ALGORITMA 2 : kondisi Jawab = 'ya'
	printf ("**********************************\n"
	 		"ALGORIRMA 2 : kondisi Jawab = 'ya'\n"
			"**********************************\n");
	printf ("Jawab = ");
	scanf ("%s", &Jawab);	
		
	if (strcmp(Jawab, "ya") ==0 )	
	{
		scanf ("%d", &n);
		J = n * 7;
		printf ("%d", J);
	}
	printf ("\n\n");
	
	//ALGORITMA 3 : kondisi B tidak sama dengan j+1
	printf ("*********************************************\n"
	 		"ALGORIRMA 3 : kondisi B tidak sama dengan j+1\n"
			"*********************************************\n");	
	printf ("Masukkan nilai B = ");	
	scanf ("%d", &B);	
	printf ("Masukkan nilai J = ");	
	scanf ("%d", &k);	
	x=25;	
	y=30;
	
	if (B!=k+1)	
	{
		Hasil = x + (y * 210);
		printf ("Hasilnya adalah = %d", Hasil);
	}	
	printf ("\n\n");	
		
	//ALGORITMA 4 : kondisi x>=6 dan c = true
	printf ("***************************************\n"
	 		"ALGORIRMA 4 : kondisi x>=6 dan c = true\n"
			"***************************************\n");	
	printf ("Masukkan nilai x = ");	
	scanf ("%d", &z);	
	printf ("Masukkan nilai c = ");	
	scanf ("%s", &q);	
	
		
	if (z>=6&&strcmp(q, "true") ==0 )	
	{
		hasil = x + (y * 210);
		printf ("Hasilnya adalah = %d", hasil);
	}
	printf ("\n\n");	
	system ("PAUSE");	
		
	
} 
