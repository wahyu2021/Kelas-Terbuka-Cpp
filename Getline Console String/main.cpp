#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimatInput;
    
    // getline(cin, variabel) <internal>
    cout << "Masukkan kalimat: "; 
    getline(cin,kalimatInput);
    cout << "Input anda: " << kalimatInput << endl;

    // jumlah kata dari input
    int posisi = 0;
    int jumlah = 0;

    while(true) {
        posisi = kalimatInput.find(" ",posisi + 1);
        jumlah++;
        if(posisi < 0) {
            break;
        }
    }

    cout << "Jumlah Kata adalah " << jumlah << endl;

    return 0;
}