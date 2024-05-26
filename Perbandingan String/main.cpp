#include <iostream>
#include <string>

using namespace std;

int main(){

    // Perbandingan string
    string input;
    string namaRahasia("ucup");

    while(true){
        cout << "tebak nama : ";
        cin >> input;

        if(input == namaRahasia){
            cout << "Tebakkan anda benar!!!!" << endl;
            break;
        } else {
            cout << "tebakkan anda salah!!" << endl;
        }
    }

    cout << "program selesai" << endl;

    cin.get();
    return 0;
}
