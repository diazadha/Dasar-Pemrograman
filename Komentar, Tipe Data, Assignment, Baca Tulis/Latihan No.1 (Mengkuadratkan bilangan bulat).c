#include <stdio.h>

/*******************
Program Tambah
Deskripsi : Mengkuadratkan suatu bilangan bulat
IS : 1 angka bilangan bulat
FS : hasil kuadrat suatu bilangan bulat dengan rumus mengkalikan bilangan bulat itu sendiri

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 2 Oktober 2018
*********************/

void main(void)

//KAMUS ****************
{	int a, kuadrat;

//ALGORITMA *************

	printf ("Tuliskan bilangan bulat = ");
	scanf ("%d", &a);
	
	kuadrat = a * a;
	
	printf ("\nKuadratnya = %d", kuadrat);
	printf ("\n");
	system ("PAUSE");
	
}
