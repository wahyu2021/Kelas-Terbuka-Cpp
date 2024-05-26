#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string kata("cat");

    //menampilkan data string
    cout << kata << endl;

    // mengambil karakter berdasarkan index
    cout << "index ke 0: " << kata[0] << endl;
    cout << "index ke 1: " << kata[1] << endl;
    cout << "index ke 2: " << kata[2] << endl;
    // cout << "index ke 3: " << kata[3] << endl;
    // tidak menghasilkan nilai random

    // Merubah karakter pada index tertentu
    kata[1] = 'e';
    cout << kata << endl;

    // Menyambung, concatenation
    string kata2(kata + "ar");
    cout << kata2 << endl;

    string kata3(" membahana");
    // .append untuk menyambung kata
    kata2.append(kata3);
    cout << kata2 << endl;

    string kata4("ahay!!!!");
    kata2 += " " + kata4;
    cout << kata2 << endl;


    string nama;
    cout << "Masukkan nama anda: " << endl;
    cin >> nama;
    cout << "Selamat datang " << nama << endl;

    cin.get();
    return 0;
}
