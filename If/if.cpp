#include <iostream>

using namespace std;

int main() {
    int a,b;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    // if statement
    // kondisi dalam bentuk boolean
    if(a%b==0) {
        cout << a << " habis dibagi dengan " << b << endl;
    }

    cout << "selesai" << endl;

    cin.get();
    return 0;
}