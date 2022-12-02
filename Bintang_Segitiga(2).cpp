#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
	int batas;
	
	printf ("masukkan jumlah baris = "); scanf ("%d", &batas);
	
	for (int i = 1; i <= batas; i++){
		for (int j = 1; j <= batas - i; j++){
			printf (" ");
		}
		for (int k = 1; k <= i; k++){
			printf ("* ");
		}
		printf ("\n");
	}
}

