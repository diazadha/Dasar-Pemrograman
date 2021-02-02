#include <stdio.h>
#include <stdlib.h>

/*************************
Program IF-THEN
Deskripsi : Program ini berisi 8 statement IF-THEN sebagai latihan mk Alpro

IS : Pengguna siap memberi masukan yang diminta
FS : Tampilan di layar, menampilkan hasil eksekusi kalimat IF-THEN

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 26 Oktober 2018
**************************/

void main (void)

//KAMUS 
	//KAMUS ALGORITMA 1
{	int A, Jumlah, jumlah;
	//KAMUS ALGORITMA 2
	int i, J, M, a, b, c;
	//KAMUS ALGORITMA 3
	int x, y, Hasil; 
	char Jawab[100];
	//KAMUS ALGORITMA 4
	int hijau, merah, N, Ba;
	char Pilih[100];
	//KAMUS ALGORITMA 5
	int B, Ju, R, j, f;
	//KAMUS ALGORITMA 6
	int q, w, Jum, n;
	//KAMUS ALGORITMA 7
	int H, p, v;
	char C[100];
	//KAMUS ALGORITMA 8
	int o, g;


//ALGORITMA
	//ALGORITMA 1 : kondisi A > 15
	printf ("******************************\n"
			"ALGORITMA 1 :kondisi (A > 15)\n"
			"******************************\n");
	printf	("Masukkan nilai A = ");
	scanf ("%d", &A);
	
	if (A>15)
	{
		scanf ("%d", &jumlah);
		Jumlah = jumlah + 1;	
	}
	printf("\n\n");
	
	//ALGORITMA 2 : kondisi M="a" OR M="b" OR M="c"
	printf ("**********************************************\n"
			"ALGORITMA 2 :kondisi (M='a' OR M='b' OR M='c')\n"
			"**********************************************\n"
			"a=2\n"
			"b=3\n"
			"c=4\n");
	printf ("Masukkan nilai M = ");
	scanf ("%d", &M);
	a=2;
	b=3;
	c=4;
	if (M==a||M==b||M==c)
	{
		scanf ("%d", &i);
		J=i+1;
		printf ("%d", J);
	}
	printf("\n\n");
	
	//ALGORITMA 3 : kondisi Jawab = "ya"
	printf ("**********************************\n"
			"ALGORITMA 3 : kondisi Jawab = 'ya'\n"
			"**********************************\n");
	printf ("Jawab= ");
	scanf("%s", &Jawab);
	
	x=2;
	y=1;
	
	if (strcmp(Jawab, "ya") == 0)
	{
		Hasil = x + (y * 210);
		printf ("Hasilnya adalah = %d", Hasil);
	} 
	printf ("\n\n");
	
	//ALGORITMA 4 : kondisi Pilih tidak sama dengan "hijau"
	printf ("***************************************\n"
			"ALGORITMA 4 : kondisi (pilih !='hijau')\n"
			"***************************************\n");
	
	printf ("Masukkan warna = ");
	scanf ("%s", &Pilih);
	
	Ba = 5;
	
	if (Pilih!= strcmp ("hijau") ==0)
	{
		N = Ba % 11;
		printf ("Baju warna %s", Pilih); 
	}
	printf ("\n\n");
	
	//ALGORITMA 5 : kondisi (B tidak sama dengan (j+1))
	printf ("**********************************\n"
			"ALGORITMA 5 : kondisi (B != (j+1))\n"
			"**********************************\n");
	printf ("Masukkan nilai B = ");
	scanf ("%d", &B);
	printf ("Masukkan nilai J = ");
	scanf ("%d", &f);
	
	if (B!=j+1)
	{
		scanf ("%d", &Ju);
		R = Ju * 7;
		printf ("%d", R);
	}
	printf ("\n\n");
	
	//ALGORITMA 6 : kondisi w lebih kecil (5*n))
	printf ("*******************************\n"
			"ALGORITMA 6 : kondisi w < (5*n)\n"
			"*******************************\n");
	printf ("n=2\n");
	printf ("Masukkan nilai W= ");
	scanf ("%d", &w);
	
	n=2;
	
	if(w<5*n)
	{
		scanf ("%d", &q);
		Jum = q + 1; 
	}
	printf ("\n\n");
	
	//ALGORITMA 7 : kondisi x>= 6 AND c = true)
	printf ("******************************************\n"
			"ALGORITMA 7 : kondisi (x>= 6 AND c = true)\n"
			"******************************************\n");
	printf ("Masukkan nilai x = ");
	scanf ("%d", &p);
	printf ("Masukkan nilai c = ");
	scanf ("%s", &C);
	
	v=3;
	
	if (p>=6&&strcmp(C, "true") == 0 )
	{
		H=p+(v*210);
		printf ("Hasilnya adalah = %d", H);
	}
	printf ("\n\n");
	
	//ALGORITMA 8 : kondisi y='a' AND y='b' AND y='c'
	printf ("*************************************************\n"
			"ALGORITMA 8 : kondisi (y='a' AND y='b' AND y='c')\n"
			"*************************************************\n");
	printf ("Masukkan nilai y = ");
	scanf ("%d", &o);
	
	if (o==a&&o==b&&o==c)
	{
		scanf ("%d", g);
		Jum = g+1;
	}
	printf ("\n\n");
				
	system ("PAUSE");
}
	
	
	
























	
