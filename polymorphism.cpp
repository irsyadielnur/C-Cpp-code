#include <iostream>
#include <string>
using namespace std;

class ibu  {
  public:
  	string nama, hobi;
  	int umur;
  	
    void hobi() {
    cout << "Saya suka bernyanyi genre Dangdut \n" ;
  }
};

class anakX : public ibu {
  public:
    void hobi() {
    cout << "saya suka bernyanyi genre POP \n" ;
   }
};

class anakY : public ibu {
  public:
    void hobi() {
    cout << "saya suka bernyanyi genre Rock \n" ;
  }
};

int main() {
  ibu ibu;
  anakX anakX;
  anakY anakY;

  ibu.hobi();
  anakX.hobi();
  anakY.hobi();
  return 0;
}
