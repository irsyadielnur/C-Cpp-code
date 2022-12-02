#include <iostream>
#include <string>
using namespace std;

class pakaian {
	public :
	string namaPakaian;
	
	pakaian (string pNamaPakaian):
	namaPakaian(pNamaPakaian){
		cout<<"Pakaian dibuat\n"<<endl;
	}
};

class kemeja{
	public:
	string jenisKain;

	kemeja(string pJenisKain):
	jenisKain(pJenisKain){
	cout<<"Kemeja dibuat\n"<<endl;
	}
};

class celana: private kemeja, public pakaian{
	public:
	string warna;

	celana(string pwarna, string pJenisKain, string pNamaPakaian):
	pakaian(pNamaPakaian),
	kemeja(pJenisKain),
	warna(pwarna){
	cout<<"Celana dibuat\n"<<endl;
	}

	string beli_celana(){
		return "Pembelian celana dengan warna " + warna + " dengan jenis kain " 
		+ jenisKain + " dengan merek " + namaPakaian + "\n\n";
	}
};
	
int main(){
	celana baru("Hitam", "Katun", "Matahari");
	cout<<baru.beli_celana();

	return 0;
}



