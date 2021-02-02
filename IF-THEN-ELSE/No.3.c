#include <stdio.h>

/******************************
Program JumlahSKS
Deskripsi : Menentukan jumlah sks yang boleh diambil mahasiswa atas dasar IP semester lalu
IS : Pengguna siap memasukkan nilai IP
FS : Jumlah sks yang boleh diambil
     Ketentuan :
     Dibawah 2,0 : Maksimal 15 sks
     2,0 s/d 3,0 : Maksimal 20 sks
     Diatas 3,0 : Maksimal 24 sks

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 10 November 2018
*********************************/

void main (void)

//KAMUS
{	float IP;
//ALGORITMA
	printf ("Masukkan nilai IP = ");
	scanf ("%f", &IP);
	
	if (IP>=2.0)
	{
		if (IP<=3.0)
		{
			printf ("Maksimal 20 sks\n");
		}
		else //IP>3.0
		{
			printf ("Maksimal 24 sks\n");
		}
	}
	else //IP<2.0
	{
		printf ("Maksimal 15 sks\n");
	}
	
	system ("PAUSE");
}
