#include <iostream>
using namespace std;

// enum ===> datanya kita yang mengatur jadi orang lain tidak bisa mengubahnya
// enum warna {merah, putih, hitam, coklat, kuning, biru};
//              0       1      2      3       4      5
enum warna {merah, putih, hitam, coklat = 5, kuning, biru};

int main() {

    warna kain;

    kain = hitam;
    
    if(kain == hitam) {
        cout <<"Warna kain hitam" << endl;
    }

    cout << kain << endl;
    
    return 0;
}