#include <iostream>
#include <stdio.h>
using namespace std;

class Mahasiswa {  // class Mahasiswa
	public : // access specifier
		string nama;  // attribute variabel string
		int nim ;
		float nilai; // attribute variabel float
		string jurusan;
		int semester; // attribute variabel intiger
		
		void kuliah () // membuat method
		{
			cout << "Nama Mahasiswa = "; 
			cin >> nama;
			cout << "NIM Mahasiswa = "; 
			cin >> nim;
			cout << "Jurusan Mahasiswa = "; 
			cin >> jurusan;
			cout << "Semester = "; 
			cin >> semester;
			
			for (int i = 0; i < 10; i++){
				cout << "Masukkan nilai Mahasiswa = "; 
				cin >> nilai;
				
				if (nilai < 50){
					cout << "MAaf nilai anda TIDAK LULUS!." << endl;
				} else {
					cout << "Selamat nilai anda LULUS!." << endl;
				}
				cout << endl;
			}
		}
};

main (){
	int pilihan;
	
	Mahasiswa mhs;
	mhs.kuliah(); // pemanggilan method dengan objek
	
	pilih :
		cout << "1. Tambah mahasiswa" << endl;
		cout << "2. exit!" << endl;
		
		cout << "Masukkan pilihan anda = "; 
		cin >> pilihan;
		
		cout << endl;
		
		switch (pilihan){
			case 1 :
				mhs.kuliah();
				goto pilih;
				break;
			
			case 2 :
				break;
				
			default :
					cout << "Pilihan anda tidak tersedia!." << endl;
		
		}
	return 0;
}
