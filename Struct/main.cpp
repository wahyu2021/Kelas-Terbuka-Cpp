#include <iostream>
#include <string>
using namespace std;

/*  Struct: data yang dibentuk oleh beberapa data
                    CONTOH
    jeruk = buah;
    jeruk.warna;
    jeruk.berat;
    jeruk.harga;
    jeruk.rasa;
    jeruk = "orange";
*/

struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main() {

    buah apel;
    buah jeruk;

    apel.warna = "merah";
    apel.berat = 250.50f;
    apel.harga = 50000;
    apel.rasa = "Manis kesat";

    jeruk.warna = "orange";
    jeruk.berat = 150.0f;
    jeruk.harga = 20000;
    jeruk.rasa = "asam";

    cout << apel.berat << "gram" << endl;
    cout << apel.warna << endl;
    cout << apel.harga << "K" << endl;
    cout << apel.rasa << endl;

    cout << endl;

    cout << jeruk.warna << endl;
    cout << jeruk.berat << "gram" << endl;
    cout << jeruk.harga << "K" << endl;
    cout << jeruk.rasa << endl;

    return 0;
}