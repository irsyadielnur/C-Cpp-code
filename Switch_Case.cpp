#include <stdio.h>
using namespace std;

main (){
	printf ("Program mencari kode pos pada kelurahan tanah abang.");
	
	pilihan :
		printf ("\n\nPilih nama Kelurahan yang ingin dicari!");
		printf ("\n1. Bendungan Hilir");
		printf ("\n2. Karet Tengsin");
		printf ("\n3. Kebon Melati");
		printf ("\n4. Kebon Kacang");
		printf ("\n5. Kampung Bali");
		printf ("\n6. Petamburan");
		printf ("\n7. Gelora");
		printf ("\n8. Exit");
		
	pilih :
		int pilihan;
		printf ("\nMasukkan pilihan anda! = "); scanf ("%d", &pilihan);
		
		
	switch (pilihan){
		case 1 : 
		printf ("Kode pos = 10210");
		goto pilihan;
		break;
		
		case 2 :
		printf ("Kode pos = 10220");
		goto pilihan;
		break;
		
		case 3 :
		printf ("Kode pos = 10230");
		goto pilihan;
		break; 
		
		case 4 :
		printf ("Kode pos = 10240");
		goto pilihan;
		break; 
		
		case 5 :
		printf ("Kode pos = 10250");
		goto pilihan;
		break; 
		
		case 6 :
		printf ("Kode pos = 10260");
		goto pilihan;
		break; 
		
		case 7 :
		printf ("Kode pos = 10270");
		goto pilihan;
		break; 
		
		case 8 :
		break;  
		
		default :
			printf ("Pilihan anda tidak tersedia!");
			goto pilihan;
			break;
	}
		
}
