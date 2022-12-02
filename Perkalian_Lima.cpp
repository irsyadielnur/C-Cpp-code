#include <stdio.h>
#include <iostream>
using namespace std;
// perkalian 5

int main (){
	int i, batas;
	
	printf ("menghitung perkalian 5");
	printf ("\nMasukkan batas perkalian = ");
	scanf ("%d", &batas);
	
	for (i = 1; i <= batas; i++){
		printf ("5 * %d = %d\n", i, 5*i);
	}
}
