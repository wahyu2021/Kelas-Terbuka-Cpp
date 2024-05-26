#include <iostream>
#include <string>
using namespace std;

struct aktor {
    string nama;
    int tahunLahir;
};

struct film {
    string judul;
    string genre;
    int tahun;
    aktor pemeran1;
    aktor pemeran2;
};

int main() {

    aktor aktor1, aktor2;
    film film1;

    // buat aktor 1
    aktor1.nama = "Michael Otong";
    aktor1.tahunLahir = 1992;

    // buat aktor 2
    aktor2.nama = "Sandra Bulog";
    aktor2.tahunLahir = 1995; 

    // buat film
    film1.judul = "Pengabdi Otong";
    film1.genre = "Horor";
    film1.tahun = 2015;
    film1.pemeran1 = aktor1;
    film1.pemeran2 = aktor2;

    cout << "1. Judul    : " << film1.judul << endl;
    cout << "2. Genre    : " << film1.genre << endl;
    cout << "3. Tahun    : " << film1.tahun << endl;
    cout << "4. Pemeran 1: " << film1.pemeran1.nama << endl;
    cout << "              " << film1.pemeran1.tahunLahir << endl;
    cout << "5. Pemeran 2: " << film1.pemeran2.nama << endl;
    cout << "              " << film1.pemeran2.tahunLahir << endl;

    return 0;
}
