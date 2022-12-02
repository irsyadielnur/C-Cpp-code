#include <iostream>
using namespace std;

class persegiPanjang {
  public:
    int panjang;
    int lebar;

    persegiPanjang (int len, int brth) : panjang(len), lebar(brth) {}

    int luasBangun() {
      return panjang * lebar;
    }
};

int main() {
  persegiPanjang rect(8, 6);

  cout << "Luas Persegi Panjang = " << rect.luasBangun();

  return 0;
}
