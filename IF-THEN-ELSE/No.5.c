#include <stdio.h>

/****************************
Program PenerimaanMahasiswaBaru
Deskripsi : Menentukan hasil proses penerimaan mahasiswa baru
IS : Pengguna siap memasukkan data tes mahasiswa baru : nilai raport rata - rata, wawancara, kesehatan
FS : Hasil tes mahasiswa : diterima; tidak diterima; atau Lakukan Tes Tertulis
	 Ketentuan :
	 	Nilai Raport		Wawancara		Kesehatan		Hasil Penerimaan
	 	70 atau lebih		Lulus			Sehat			Diterima
	 	70 atau lebih		Lulus			Tidak Sehat		Tidak Diterima
	 	70 atau lebih		Tidak lulus		Sehat			Tidak Diterima
	 	70 atau lebih		Tidak lulus		Tidak Sehat		Tidak Diterima
	 	Kurang dari 70		Lulus			Sehat			Lakukan Tes Tertulis
	 	Kurang dari 70		Lulus			Tidak Sehat		Tidak Diterima
	 	Kurang dari 70		Tidak Lulus		Sehat			Tidak Diterima
	 	Kurang dari 70		Tidak Lulus		Tidak Sehat		Tidak Diterima

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 10 November 2018
****************************/

void main (void)

//KAMUS
{	float R;
	char W[100], K[100]; // W : L atau T; K : S atau T
//ALGORITMA
	printf ("Masukkan nilai raport = ");
	scanf ("%f", &R);
	printf ("Wawancara (L atau T) = ");
	scanf ("%s", &W);
	printf ("Kesehatan (S atau T) = ");
	scanf ("%s", &K);
	
	if ((R>=70) && (strcmp(W, "L") ==0) && (strcmp(K, "S") ==0))
	{
		printf ("Diterima\n");
	}
	else
	{
		if ((R<70) && (strcmp(W, "L") ==0) && (strcmp(K, "S") ==0))
		{
			printf ("lakukan Tes Tertulis Ulang\n");
		}
		else
		{
			printf ("Tidak Diterima\n");
		}
	}
	system ("PAUSE");
}
