#include <iostream>
#include <string>
using namespace std;

class pakaian {
	public :
		string nama_pakaian;
		
		pakaian ( string pnama_pakaian ):
			nama_pakaian ( pnama_pakaian ){
				cout << " Pakaian dibuat\n" << endl;
			}
};

class kemeja : public pakaian {
	public :
		string warna, jenis_lengan;
		
		kemeja (string pwarna, string pjenis_lengan, string pnama_pakaian):
			warna (pwarna),
			jenis_lengan (pjenis_lengan),
			pakaian (pnama_pakaian) {
				cout << " Kemeja dibuat\n" << endl;
			}
			
			string beli_kemeja (){
				return " Pembelian kemeja warna " + warna + " jenis kemeja lengan " + jenis_lengan + 
				" dengan merek " + nama_pakaian + "\n\n";
			}
};

main (){
	kemeja baru("Hitam", "Panjang", "Erigo");
	cout << baru.beli_kemeja();
	
	return 0;
}







