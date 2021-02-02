#include <stdio.h>
#include <stdlib.h>

/*****************************************************
Program BacaTulisFile
Deskripsi : Membaca data dari file input dan menulis hasil ke file output
			hasilnya berupa penjumlahan lajur ke 1 dan lajur ke 2

IS : Ada file datamasukan.txt yang memiliki format :
	 5		(banyaknya baris data)
	 2 5 	(tiap baris berformat : int spasi int)
	 50 40
	 6 0
	 ...
	 
FS : Isi file datamasukan.txt terbaca, dan hasil dituliskan di hasilkeluaran.txt

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 16 Januari 2019
******************************************************/

main (void)
//KAMUS
{
	int i, BanyakBarisData, in1, in2, Jumlah_in1, Jumlah_in2;
	FILE *Fin;  //pointer ke file input
	FILE *Fout; //pointer ke file output
	
//ALGORITMA
	printf ("Program Membaca dan Menulis File \n");
	printf ("******************************** \n");
	
	// buka file masukan, ingat : nama folder dan nama file harus benar
	// "r" adalah argumen mode, yang berarti file dibuka untuk dibaca (read)
	// kalau "r" tidak berhasil, berikan "rt" untuk readtext
	Fin = fopen ("D://Diaz/Kuliah/Semester 1/Dasar Pemrograman (Bu Winang)/Masukan keluaran dari dan ke file/datamasukan.txt", "rt");
	
	// membaca baris pertama file masukan
	fscanf (Fin, "%d", &BanyakBarisData);
	
	//tampilkan apa yang dibaca dari file masukan
	printf ("Data di baris pertama file masukan : Banyaknya baris data = %d \n", BanyakBarisData);
	
	//inisialisasi
	Jumlah_in1 = 0;
	Jumlah_in2 = 0;
	
	// baca data di baris berikutnya dari file masukan
	for (i=1; i<=BanyakBarisData; i++)
	{
		fscanf (Fin, "%d %d", &in1, &in2);
		printf ("Data yang dibaca : %d %d \n", in1, in2);
		Jumlah_in1 = Jumlah_in1 + in1;
		Jumlah_in2 = Jumlah_in2 + in2;
	}
	
	// buka file keluaran
	// "w" adalah argumen mode, yang berarti file dibuka untuk ditulis (write)
	Fout = fopen ("D://Diaz/Kuliah/Semester 1/Dasar Pemrograman (Bu Winang)/Masukan keluaran dari dan ke file/hasilkeluaran.txt", "w");
	
	printf ("Sedang menulis di file output : hasilkeluaran.txt.....\n");
	
	// menulis hasil di file output
	fprintf (Fout, "Jumlah input pertama = %d \n", Jumlah_in1);
	fprintf (Fout, "Jumlah input kedua = %d \n", Jumlah_in2);
	
	// menutup file input dan file output
	fclose (Fin);
	fclose (Fout);
	
	system ("PAUSE");
}

