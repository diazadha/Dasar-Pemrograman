#include <stdio.h>
#include <stdlib.h>

/*************************
Program IF-THEN
Deskripsi : Program ini berisi 6 statement IF-THEN sebagai latihan mk Alpro

IS : Pengguna siap memberi masukan yang diminta
FS : Tampilan di layar, menampilkan hasil eksekusi kalimat IF-THEN

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 26 Oktober 2018
**************************/

void main (void)

//KAMUS
{	//KAMUS ALGORITMA 1
	float Beli, Harga;
	//KAMUS ALGORITMA 2
	int B, A, temp;
	//KAMUS ALGORITMA 3
	char Cuaca[100];
	//KAMUS ALGORITMA 4
	char Flag[100];
	int Jumlah, jumlah;
	//KAMUS ALGORITMA 5
	char Pilihan[100];
	//KAMUS ALGORITMA 6
	char pilihan[100], b[100];

//ALGORITMA
	//ALGORITMA 1 : kondisi Beli > 100
	printf	("********************************\n"
			 "ALGORITMA 1 : kondisi Beli > 100\n"
			 "********************************\n");
	printf ("Masukkan harga barang =Rp.");
	scanf ("%f", &Beli);
	
	if (Beli>100)
	{
		Harga = Beli - (Beli * 50/100);
		printf ("Harga barang =Rp.%.3f ", Harga);
	}
	printf ("\n\n");
	
	//ALGORITMA 2 : kondisi B>A
	printf	("*************************\n"
			 "ALGORITMA 2 : kondisi B>A\n"
			 "*************************\n");	
	printf ("Nilai B = ");
	scanf ("%d", &B);
	printf ("Nilai A = ");
	scanf ("%d", &A);
	if (B>A)
	{
		temp=B;
		B=A;
		A=temp;
		printf ("**********************************\n"
				"Nilai A dan B bertukar nilai Jadi,\n"
				"**********************************\n");
		printf ("Nilai A = %d\n", A); 
		printf ("Nilai B = %d\n", B);
	}
	printf ("\n\n");
	
	//ALGORITMA 3 : kondisi cuaca = hujan
	printf	("***********************************\n"
			 "ALGORITMA 3 : kondisi cuaca = hujan\n"
			 "***********************************\n");	
	printf ("Cuaca = ");
	scanf ("%s", &Cuaca);
	
	if (strcmp(Cuaca, "hujan") ==0 )
	{
		printf ("Pakai payung");
	}
	printf ("\n\n");
	
	//ALGORITMA 4 : kondisi Flag = True
	printf	("*********************************\n"
			 "ALGORITMA 4 : kondisi Flag = True\n"
			 "*********************************\n");	
	printf ("Flag = ");
	scanf ("%s", &Flag);
	Jumlah = 23;
	
	if (strcmp(Flag, "True") ==0 )
	{
		Jumlah + 1;
		printf ("Jumlah = %d", Jumlah + 1);
	}
	printf ("\n\n");
	
	//ALGORITMA 5 : kondisi Pilihan = merah
	printf	("*************************************\n"
			 "ALGORITMA 5 : kondisi Pilihan = merah\n"
			 "*************************************\n");
	printf ("Pilihan = ");
	scanf ("%s", &Pilihan);
	
	if (strcmp(Pilihan, "merah") ==0 )
	{
		printf ("merah");
	}
	printf ("\n\n");
	
	//ALGORITMA 6 : kondisi pilihan = 'kacang' dan b = c
	printf	("**************************************************\n"
			 "ALGORITMA 6 : kondisi pilihan = 'kacang' dan b = c\n"
			 "**************************************************\n");
	printf ("Pilihan = ");
	scanf ("%s", &pilihan);
	printf ("B = ");
	scanf ("%s", &b);
	
	if (strcmp(pilihan, "kacang") ==0&&(strcmp(b, "c")) ==0 )
	{
		printf ("Harganya = Rp.2000");
	}
	printf ("\n\n");	
}

