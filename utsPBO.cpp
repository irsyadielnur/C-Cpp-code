#include <iostream>
#include <string>
using namespace std;

class enkapsulasi {
	private :
		int j;
	public :
		void usia ( int age ){
			 int a = age;
		}
	};

main (){
	enkapsulasi.usia(25);
	cout << "your age is" <<  << "years old" << endl;
	return 0;
}
