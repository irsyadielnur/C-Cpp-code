#include <iostream>
#include <stdio.h>
using namespace std;

main (){
	int bar1, kol1, bar2, kol2, hasil = 0;
	int A[50][50], B[50][50], C[50][50];
	
	printf ("perkalian dua matrik ordo sama\n");
	printf ("Array A\n");
	printf ("Masukkan baris Matriks = "); scanf ("%d", &bar1);
	printf ("Masukkan kolol Matriks = "); scanf ("%d", &kol1);
	printf ("Array B\n");
	printf ("Masukkan baris Matriks = "); scanf ("%d", &bar2);
	printf ("Masukkan kolol Matriks = "); scanf ("%d", &kol2);
	printf ("\n");
	
	for (int i = 1; i <= bar1; i++){
		for (int j = 1; j <= kol1; j++){
			printf ("Masukkan array A (%d, %d) = ", i, j); 
			scanf ("%d", &A[i][j]);
		}
	}
	
	printf ("\nCetak array A\n");
	for (int i = 1; i <= bar1; i++){
		for (int j = 1; j <= kol1; j++){
			printf ("%d\t", A[i][j]);
		}
		printf ("\n");
	}
	printf ("\n");
	
	for (int i = 1; i <= bar2; i++){
		for (int j = 1; j <= kol2; j++){
			printf ("Masukkan array A (%d, %d) = ", i, j); 
			scanf ("%d", &B[i][j]);
		}
	}
	
	printf ("\nCetak array B\n");
	for (int i = 1; i <= bar2; i++){
		for (int j = 1; j <= kol2; j++){
			printf ("%d\t", B[i][j]);
		}
		printf ("\n");
	}
	printf ("\n");
	
}





