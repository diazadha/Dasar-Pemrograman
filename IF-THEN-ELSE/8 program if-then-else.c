#include <stdio.h>
#include <stdlib.h>

/*************************
Program IF-THEN
Deskripsi : Program ini berisi 8 statement IF-THEN-ELSE sebagai latihan mk Alpro

IS : Pengguna siap memberi masukan yang diminta
FS : Tampilan di layar, menampilkan hasil eksekusi kalimat IF-THEN-ELSE

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 7 November 2018
**************************/

void main (void)

//KAMUS
	//KAMUS ALGORITMA 1
{	int A, j, J, jumlah, Jumlah; //Variabel yang diperlukan
	//KAMUS ALGORITMA 2
	int M, a, b, c, H, hasil, Hasil, x, y;
	//KAMUS ALGORITMA 3
	char Y[100];
	int ju, Ju, jum, Jum;
	//KAMUS ALGORITMA 4
	int e, f, Rumus, N, q, Pilih;
	//KAMUS ALGORITMA 5
	int B, p, rumus, w, R, Jumlahnya;
	//KAMUS ALGORITMA 6
	int o, l, L, n, Answer;
	//KAMUS ALGORITMA 7
	int C, g, v, lah, Rum;
	char h[100];
	//KAMUS ALGORITMA 8
	int u, z, Z, k, W, s;
	
//ALGORITMA
	//ALGORITMA 1 : kondisi A > 15
	printf ("****************************\n"
			"ALGORITMA 1 : kondisi A > 15\n"
			"****************************\n");
	
	printf ("Masukkan nilai A = ");
	scanf ("%d", &A);
	
	if (A>15)
	{
		scanf ("%d", &j);
		J=j * 7;
		printf ("%d", J);
	}
	else //A<=15
	{
		scanf ("%d", &jumlah);
		Jumlah=jumlah + 1;
	}
	
	printf ("\n\n");
	
	//ALGORITMA 2 : kondisi M = "a" OR M = "b" OR M = "c"
	printf ("****************************************************\n"
			"ALGORITMA 2 : kondisi M = 'a' OR M = 'b' OR M = 'c '\n"
			"a = 4\n"
			"b = 5\n"
			"c = 6\n"
			"*****************************************************\n");
	printf ("Masukkan nilai M = ");
	scanf ("%d", &M);
			
	a = 4;
	b = 5;
	c = 6;
	
	if (M==a || M==b || M==c)
	{
		scanf ("%d", &hasil);
		H = hasil + 1;
	}
	else // M != 'a' AND M != 'b' AND M != 'c'
	{
		printf ("Masukkan nilai x = ");
		scanf ("%d", &x);
		printf ("Masukkan nilai y = ");
		scanf ("%d", &y);
		
		Hasil = x + (y * 210);
		printf ("Hasilnya adalah %d", Hasil); 
	}
	
	printf ("\n\n");
	
	//ALGORITMA 3 : kondisi Jawab = ya
	printf ("********************************\n"
			"ALGORITMA 3 : kondisi Jawab = ya\n"
			"********************************\n");
	printf ("Jawab = ");
	scanf ("%s", &Y);
	
	if (strcmp(Y, "ya") ==0)
	{
		scanf ("%d", &ju);
		Ju = ju * 7;
		printf ("%d", Ju);
	}
	else //Jawab != ya
	{
		scanf ("%d", &jum);
		Jum = jum + 1;
	}
	
	printf ("\n\n");
	
	//ALGORITMA 4 : kondisi Pilih != 'hijau'
	printf ("**************************************\n"
			"ALGORITMA 4 : kondisi Pilih != 'hijau'\n"
			"**************************************\n");		
	printf ("Pilihan warna : 1.hijau atau 2.selain hijau\n");
	printf ("Pilih (tulis angkanya) = ");
	scanf ("%d", &Pilih);
	
	N = 10;
	q = 5;
	
	if (Pilih==2) 
	{
		N = q % 11;
		printf ("Baju warna : %d", Pilih);
	}
	else // Pilih = hijau
	{
		printf ("Masukkan nilai e = ");
		scanf ("%d", &e);
		printf ("Masukkan nilai f = ");
		scanf ("%d", &f);
		
		Rumus = e + (f * 210);
		printf ("Hasilnya adalah = %d", Rumus);
	}
		
	printf ("\n\n");

	//ALGORITMA 5 : kondisi (B tidak sama dengan (j+1)
	printf ("**********************************\n"
			"ALGORITMA 5 : kondisi (B != (j+1))\n"
			"**********************************\n");
	printf ("Masukkan nilai B = ");
	scanf ("%d", &B);
	printf ("Masukkan nilai J = ");
	scanf ("%d", &p);
	
	if (B!=j+1)
	{
		scanf ("%d", &Jumlahnya);
		R = Jumlahnya * 7;
		printf ("%d", R);
	}
	else //B = (j+1)
	{
		scanf ("%d", &w);
		rumus = w + 1;
	}
	printf ("\n\n");

	//ALGORITMA 6 : kondisi w lebih kecil (5*n)
	printf ("*******************************\n"
			"ALGORITMA 6 : kondisi w < (5*n)\n"
			"*******************************\n");
	printf ("n=2\n");
	printf ("Masukkan nilai W= ");
	scanf ("%d", &o);
	
	n=2;
	
	if(o<5*n)
	{
		n = L % 11;
		printf ("Baju warna", n); 
	}
	else // w >= (5*n)
	{
		scanf ("%d", &l);
		Answer = l + 1;
	}
	printf ("\n\n");

	//ALGORITMA 7 : kondisi x>= 6 AND c = true
	printf ("******************************************\n"
			"ALGORITMA 7 : kondisi (x>= 6 AND c = true)\n"
			"******************************************\n");
	printf ("Masukkan nilai x = ");
	scanf ("%d", &p);
	printf ("Masukkan nilai c = ");
	scanf ("%s", &h);
	
	v=3;
	
	if (p>=6&&strcmp(h, "true") == 0 )
	{
		g=p+(v*210);
		printf ("Hasilnya adalah = %d", g);
	}
	else // x<6 OR c!= true
	{
		scanf ("%d", &lah);
		Rum = lah * 7;
		printf ("%d", Rum);
	}
	printf ("\n\n");

	//ALGORITMA 8 : kondisi y='a' AND y='b' AND y='c' 
	printf ("***********************************************\n"
			"ALGORITMA 8 : kondisi y='a' AND y='b' AND y='c'\n"
			"a=4\n"
			"b=5\n"
			"c=6\n"
			"***********************************************\n");
	printf ("Masukkan nilai y = ");
	scanf ("%d", &u);
	
	if (u==a&&u==b&&u==c)
	{
		scanf ("%d", z);
		s = z+1;
	}
	else // y!= 'a' OR y!= 'b' OR y!= 'c'
	{
		printf ("Masukkan nilai z = ");
		scanf ("%d", &Z);
		printf ("Masukkan nilai w = ");
		scanf ("%d", &W);
		
		Z=k+(W*210);
		printf ("Hasilnya adalah = %d", Z);
	}
	printf ("\n\n");
				
	system ("PAUSE");

}	
