#include <stdio.h>

/****************************
Program ResikoJantung
Deskripsi Menentukan besar faktor resiko penyakit jantung
IS : Pengguna siap memasukkan data kesehatan : merokok, umur, tingkat stress
FS : Menampilkan resiko penyakit jantung seseorang (berapa kali lipat normal)
		Merokok memberi 5 kali lipat resiko jantung.
		Umur di atas 40 tahun menaikkan faktor resiko sebesar 2 kali lipat
		Tingkat stress yang tinggi menyumbang faktor resiko 3 kali lipat

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 11 November 2018
****************************/

void main (void)

//KAMUS
{	int Angka;
	char m[100], s[100];
//ALGORITMA
	
	printf ("Merokok atau tidak = ");
	scanf ("%s", &m);
	printf ("Umurnya berapa = ");
	scanf ("%d",&Angka);
	printf ("Stressnya tinggi atau tidak = ");
	scanf ("%s", &s);
	
	if (strcmp(m, "Merokok") ==0)
	{
		if (Angka > 40)
		{
			if (strcmp (s, "tinggi") ==0)
			{
				printf ("30 kali lipat\n");
			}
			else
			{
				printf ("10 kali lipat\n");
			}
		}
		else
		{
			if (strcmp (s, "tinggi") ==0)
			{
				printf ("15 kali lipat\n");
			}
			else
			{
				printf ("5 kali lipat\n");
			}
		}
	}
	else
	{
		if (Angka > 40 && (strcmp (s, "tinggi") ==0))
		{
			printf ("6 kali lipat\n");
		}
		else
		{
			if (Angka < 40)
			{
				if (strcmp (s, "tinggi") ==0)
				{
					printf ("3 kali lipat\n");
				}
			}
			else
			{
				printf ("2 kali lipat\n");
			}
		}
	}
	system ("PAUSE");
}
