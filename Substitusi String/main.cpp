#include <iostream>
#include <string>

using namespace std;

int main() {

    string kalimat1("Aku suka kamu suka, siapa? dia!");
    string kalimat2("Wakanda Forevah!!");

    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    // swap string
    cout << "swap string" << endl;
    kalimat1.swap(kalimat2);
    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;
    
    // replace(index,panjang), mengganti string
    kalimat2.replace(27,3,"otong");
    int posisi = kalimat1.find("ah");
    kalimat1.replace(posisi,2,"er");
    cout << "replace string" << endl;
    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    //insert string
    kalimat1.insert(8,"dan hatiku ");
    cout << "insert string" << endl;
    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    return 0;
}