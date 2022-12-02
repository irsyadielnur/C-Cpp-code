#include <iostream>
using namespace std;
 
class SmartPhone{
private:
    bool menyala = 0; //disembunyikan
 
public:
    void tombolMenyalakan(){
        menyala = 1;
    }
    void tombolMatikan(){
        menyala = 0;
    }
    void cetakStatus(){
        cout << (menyala? "Smartphone telah menyala": "Smartphone mati")<<endl;
    }
};
 
int main(){
    SmartPhone bcpp;
 
    bcpp.cetakStatus();
    bcpp.tombolMenyalakan();
    bcpp.cetakStatus();
    bcpp.tombolMatikan();
    bcpp.cetakStatus();
 
    return 0;
}
