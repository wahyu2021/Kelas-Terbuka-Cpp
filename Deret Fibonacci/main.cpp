#include <iostream>

using namespace std;

int main() {
    
    // f_n = f_n1 + f_n2

    int n;
    int f_n;
    int f_n1 = 1;
    int f_n2 = 0;
    cout << "Program Deret Fibonacci \n";
    cout << "Masukkan nilai ke-n: ";
    cin >> n;
    cout << f_n2 << " ";
    cout << f_n1 << " ";

    for(int i = 1; i < n; i++) {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " ";
    }
    cout << "\n";


    return 0;
}