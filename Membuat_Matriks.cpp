#include <iostream>
#include <stdio.h>
using namespace std;

main (){
	int baris, kolom;
	int A[50][50];
	
	printf ("Masukkan jumlah baris = "); scanf ("%d", &baris);
	printf ("Masukkan jumlah kolom = "); scanf ("%d", &kolom);
	
	for (int i = 1; i <= baris; i++){
		for (int j = 1; j <= kolom; j++){
			printf ("Masukkan array (%d, %d) = ", i, j); 
			scanf ("%d", &A[i][j]);
		}
	}
	
	printf ("\n");
	printf ("Menampilkan array dalam bentuk Matriks\n");
	
	for (int i = 1; i <= baris; i++){
		printf ("|\t");
		for (int j = 1; j <= kolom; j++){
			printf ("%d \t", A[i][j]);
		}
		printf ("|\n");
	}
}
