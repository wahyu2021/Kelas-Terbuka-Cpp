#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang diprogam kalkulator" << endl;
    
    // input dari user
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "Pilih operator +, -, /, *: ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua: ";
    cin >> b;

    switch (aritmatika){
	    case '+':
	        hasil = a + b;
	        break;
	    case '-':
	        hasil = a - b;
	        break;
	    case '*':
	        hasil = a * b;
	        break;
	    case '/':
	        hasil = a / b;
	        break;
	    default:
	        cout << "error" << endl;
	        break;
    }
	cout << "\n hasil perhitungan: " << a << " " << aritmatika << " " << b << " = " << hasil << endl;

    cin.get();
    return 0;
}
