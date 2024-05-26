#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string kalimat1 ("Dayat suka olahraga supaya sehat");
    string kalimat2 ("Ucup suka makan pisang di pagi hari");

    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    // Substring mengambil string di tengah-tengah
    // substr(index, panjang)
    cout << kalimat1.substr(11,8) << " ";
    cout << kalimat2.substr(16,6) << endl;

    // mencari posisi dari substring
    cout << kalimat1.find("olahraga") << endl;
    cout << kalimat2.find("pisang") << endl;

    int a = kalimat1.find("ya");
    cout << a << endl;
    cout << kalimat1.find("ya", a + 1) << endl;

    // menacari posisinya dari belakang ==> rfind
    cout << kalimat2.rfind("an", a + 1) << endl;


    return 0;
}
