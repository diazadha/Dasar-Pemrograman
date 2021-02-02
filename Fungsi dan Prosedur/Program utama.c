#include <stdio.h>
#include <stdlib.h>

/******************************************************************* 
Program BitwiseLogika
Deskripsi : Diberikan dua string of bit, panjang stringnya adalah n,
			program akan mengeluarkan bitwise AND, OR dan XOR
			
IS : dibaca dari layar :
	 nilai n; n <= 20
	 dua buah string of bit a dan b
FS : ditampilkan di layar :
	 a bitwiseAND b, a bitwiseOR b, a bitwiseXOR b

/contoh/
n=6 a=110111 b=101000

110111 bitwiseAND 101000 = 100000
110111 bitwiseOR 101000 = 111111
110111 bitwiseXOR 101000 = 011111

Dbuat oleh : Diaz Adha Asri Prakoso
Tanggal	   : 11 Januari 2019
********************************************************************/

// ini header dari Prosedur 'DAN'
void BitwiseDAN (int k, char a[20], char b[20], char *h[20]);

main (void)

//KAMUS
{
	int k;
	char a[20];
	char b[20];
	char h[20];
//ALGORITMA
	printf ("Program Bitwise Logika\n");
	printf ("**********************\n");

	printf ("Masukkan panjang string (1 sampai 20) = ");
	scanf ("%d", &k);
	printf ("Masukkan string_of_bit a = ");
	scanf ("%s", &a);
	printf ("Masukkan string_of_bit b = ");
	scanf ("%s", &b);

	//chek nilai a dan b dulu
	printf ("a = %s \n", a);
	printf ("b = %s \n", b);

	//Panggil procedure 'BitwiseAND', taruh hasilnya di variabel 'hasil'
	BitwiseDAN (k, a, b, &h);

	//Tampilkan nilai 'hasil' di layar
	printf ("\n");
	printf ("a BitwiseAND b = %s\n", h);

	system ("PAUSE");
}

void BitwiseDAN (int k, char a[20], char b[20], char *h[20])
// Procedure menghasilkan BitwiseAND dari string of bit a dan b
// IS : 1 <= k <= 20; string of bit a dan b
// FS : a BitwiseAND b

	// KAMUS
	{
		int i; //variabel lokal, hanya berlaku di dalam procedure
		
	//ALGORITMA
		for (i=0; i<k; i++)
		{
			if (a[i] == '1' && b[i] == '1')
			{
				h[i] = '1';
			}
			else
			{
				h[i] = '0';
			}
		}
	}		
