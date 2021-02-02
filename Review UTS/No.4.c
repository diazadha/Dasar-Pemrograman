#include <stdio.h>

/********************
Program Fotokopi
Deskripsi : Menentukan harga hasil fotokopi
IS : pengguna siap memasukkan data jumlah lembar fotokopi
FS : menampilkan harga yang harus dibayar dengan ketenntuan:
		Fotokopi 1-50 lembar : Harganya 200 rupiah per lembar
		Fotokopi 51-200 lembar : harganya 150 rupiah per lembar
		Fotokopi di atas 200 lembar : harganya 100 rupiah per lembar

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 11 November 2018
***********************/

void main (void)

//KAMUS
{	int d, f, a, data;
//ALGORITMA
	printf ("Masukkan jumlah lembar fotokopi = ");
	scanf ("%d", &data);
	
	if (data>200)
	{
		d = data * 100;
		printf ("Harga total = %d Rupiah\n", d);
	}
	else
	{
		if (data>50)
		{
			f = data * 150;
			printf ("Harga total = %d Rupiah\n", f);
		}
		else
		{
			a = data * 200;
			printf ("Harga total = %d Rupiah\n", a);
		}
	}
	system ("PAUSE");
}
