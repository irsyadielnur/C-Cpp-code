#include <iostream>
#include <stdio.h>
using namespace std;

int baris, kolom;
	int A[50][50], B[50][50], C[50][50];

void tentukan_Ordo (){
	printf ("penjumlahan Array ordo sama\n");
	printf ("Masukkan jumlah baris = "); scanf ("%d", &baris);
	printf ("Masukkan jumlah kolom = "); scanf ("%d", &kolom);

}

void arrayAB (){
	for (int i = 1; i <= baris; i++){
		for (int j = 1; j <= kolom; j++){
			printf ("Masukkan array A (%d, %d) = ", i, j); 
			scanf ("%d", &A[i][j]);
		}
	}
	
	printf ("\nCetak array A\n");
	for (int i = 1; i <= baris; i++){
		for (int j = 1; j <= kolom; j++){
			printf ("%d\t", A[i][j]);
		}
		printf ("\n");
	}

	printf ("\n");
	for (int i = 1; i <= baris; i++){
		for (int j = 1; j <= kolom; j++){
			printf ("Masukkan array B (%d, %d) = ", i, j); 
			scanf ("%d", &B[i][j]);
		}
	}
	
	printf ("\nCetak array B\n");
	for (int i = 1; i <= baris; i++){
		for (int j = 1; j <= kolom; j++){
			printf ("%d\t", B[i][j]);
		}
		printf ("\n");
	}
	printf ("\n");
}

void Jumlahkan (){
	printf ("hasil penjumlahan Matriks A dan Matriks B adalah = ");
	for (int i = 1; i <= baris; i++){
		for (int j = 1; j <= kolom; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	printf ("\n");
	for (int i = 1; i <= baris; i++){
		for (int j = 1; j <= kolom; j++){
			printf ("%d\t", C[i][j]);
		}
		printf ("\n");
	}
}

main (){ // pake switch case dong
	int pilihan;
	pilih :
		printf ("\n1. Masukkan Ordo Matriks");
		printf ("\n2. Input nilai Matriks A dan Matriks B");
		printf ("\n3. Jumlahkan Matriks A dan B");
		printf ("\n4. exit");
		
		printf ("\nMasukkan pilihan anda = \n"); scanf ("%d", &pilihan);
	
	switch (pilihan) {
	case 1 :
		tentukan_Ordo();
		goto pilih;
		break;
	
	case 2 : 
		arrayAB();
		goto pilih;
		break;
		
	case 3 :
		Jumlahkan();
		goto pilih;
		break;
	
	case 4 :
		break; 
		
	default :
		printf ("Pilihan yang anda masukkan tidak tersedia");
	}
}











