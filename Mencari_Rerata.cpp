#include <stdio.h>
#include <iostream>
using namespace std;
// mencari rata-rata

int main (){
	// program menghitung rata-rata dengan (while)
	
	int bil, jumlah = 0, n = 0;
	float rerata;
	
	printf ("masukkan bilangan = "); scanf ("%d", &bil);
	while ( bil != 0 ){
		jumlah = jumlah + bil;
		n++;
		printf ("masukkan bilangan = "); scanf ("%d", &bil);
	}
	printf ("\n");
	
	
	rerata = jumlah / n ;
	printf ("rata-rata adalah = %.2f", rerata);
}
