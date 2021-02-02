#include <stdio.h>

/*******************
Program HelloYou
Deskripsi : Membaca nama pengguna dan menyapanya
IS : pengguna memiliki nama
FS : nama pengguna ditampilkan di layar 

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 2 Oktober 2018
*********************/

void main(void)

//KAMUS ****************
{	char Nama[10];
	
	//ALGORITMA ************
	
	printf ("Namamu siapa ?");
	scanf ("%s", &Nama);
	printf ("Hello %s", Nama);
	printf ("\n \n");
	system ("PAUSE");
	
}
