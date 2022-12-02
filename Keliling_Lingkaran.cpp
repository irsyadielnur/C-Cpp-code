#include <stdio.h> /* menghitung keliling lingkaran
					dan keliling segitiga */ 

int main (){
	int a, b, c, kelilingSegitiga;
	float pi = 3.14, r, kelilingLingkaran;
	
	printf ("Program menghitung keliling lingkaran\n");
	printf ("Masukkan ukuran jari-jari = "); scanf ("%f", &r);
	
	kelilingLingkaran = 2 * pi * r;
	
	printf ("Keliling lingkaran = %.2f\n", kelilingLingkaran);
	
	printf ("\nProgram menghitung keliling segitiga\n");
	printf ("Masukkan ukuran sisi-1 = "); scanf ("%d", &a);
	printf ("masukkan ukuran sisi-2 = "); scanf ("%d", &b);
	printf ("masukkan ukuran sisi-3 = "); scanf ("%d", &c);
	
	kelilingSegitiga = a + b + c;
	
	printf ("Keliling Segitiga = %d", kelilingSegitiga);
}
