#include <stdio.h>

/********************************
Program char
Deskripsi : Membaca berulang ulang input user (char) dan mencetaknya di layar 
			"VOKAL" jika merupakan huruf a,i,u,e,o
			"BUKAN VOKAL" jika bukan kelima huruf vokal
			pembacaan akan berhenti jika user memsukkan tanda "#"
IS : User siap menginput char
FS : Tampil di layar hasil eksekusi char
Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 6 Januari 2019
*********************************/

void main (void)

{
//KAMUS
	char a, i;
//ALGORITMA
	printf ("Masukkan huruf / angka = ");
	scanf ("%c", &a);
	scanf ("%c", &i);
	
	while (a!='#')
	{
		if (a=='a'||a=='i'||a=='u'||a=='e'||a=='o')
		{
			printf ("VOKAL\n");
		}
		else
		{
			printf ("BUKAN VOKAL\n");
		}
		printf ("Masukkan huruf / angka = ");
		scanf ("%c", &a);
		scanf ("%c", &i);
	}
	printf ("\n");
	system ("PAUSE");
	
}
