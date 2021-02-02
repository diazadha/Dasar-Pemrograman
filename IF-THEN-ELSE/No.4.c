#include <stdio.h>

/********************************
Program Titik_Koordinat_Cartesius
Deskripsi : Menentukan kuadran sebuah titik; menggeser titik; menghitung jarak 2 titik
IS : Pengguna siap memasukkan data koordinat titik; data translasi; data koordinat 2
	Ketentuan :
	(1) Kuadran
			# Jika x>0 dan y>0 maka titik p berada pada kuadran 1
			# Jika x<0 dan y>0 maka titik p berada pada kuadran 2
			# Jika x<0 dan y<0 maka titik p berada pada kuadran 3
			# Jika x>0 dan y<0 maka titik p berada pada kuadran 4
	(2) Jika titik p digeser secara horizontal n satuan dan secara vertikal m satuan maka koordinat titik p sekarang adalah (x+n, y+m)
	(3) Jika diketahui terdapat titik Q(x1 - x), hitunglah jarak p ke q dengan rumus jarak : 
		Jarak pq = akar dari (x1 - x) kuadrat ditambah (y1 - y) kuadrat

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 10 November 2018
********************************/

void main (void)

//KAMUS
{	int xP, yP, xPP, yPP, m, n, xQ, yQ, Jarak;
//ALGORITMA 
	printf ("(1) Menentukan Kuadran\n");
	printf ("Masukkan nilai xP = ");
	scanf ("%d", &xP);
	printf ("Masukkan nilai yP = ");
	scanf ("%d", &yP);
	
	if (xP>0)
	{
		if (yP>0)
		{
			printf ("Titik P berada pada kuadran 1\n\n");
		}
		else //yP<0
		{
			printf ("Titik P berada pada kuadran 4\n\n");
		}
	}
	else //xP<0
	{
		if (yP>0)
		{
			printf ("Titik P berada pada kuadran 2\n\n");
		}
		else //yP<0
		{
			printf ("Titik P berada pada kuadran 3\n\n");
		}
	}
	
	printf ("(2) Translasi (pergeseran)\n");
	printf ("Masukkan nilai m = ");
	scanf ("%d", &m);
	printf ("Masukkan nilai n = ");
	scanf ("%d", &n);
	
	xPP = xP + n;
	yPP = yP + m;
	printf ("P bergeser ke titik dengan koordinat = (%d, %d)\n\n", xPP, yPP);
	
	printf ("(3) Menghitung Jarak\n");
	printf ("Masukkan nilai xQ = ");
	scanf ("%d", &xQ);
	printf ("Masukkan nilai yQ = ");
	scanf ("%d", &yQ);
	
	Jarak = sqrt ((xQ - xP) * (xQ - xP) + (yQ - yP) * (yQ - yP));
	printf ("Jarak = %d\n", Jarak);
	
	system ("PAUSE"); 
} 
