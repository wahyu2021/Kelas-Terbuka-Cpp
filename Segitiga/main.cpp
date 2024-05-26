#include <iostream>

using namespace std;

int main () {

    int n;

    cout << "Masukkan panjang pola: ";
    cin >> n;

    cout << "Pola 1\n";
    
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 2\n";
    
    for (int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 3\n";
    
    for (int i = 1; i <= n; i++) {
        for(int space = n; space > i; space--){
            cout << " ";
        }

        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 4\n";
    
    for (int i = 1; i <= n; i++) {
        for(int space = 1; space < i; space++){
            cout << " ";
        }

        for(int j = n; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 5\n";
    
    for (int i = 1; i <= n; i++) {
        for(int space = n; space > i; space--){
            cout << " ";
        }

        for(int j = 1; j <= (2*i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 6\n";
    
    for (int i = 1; i <= n; i++) {
        for(int space = 1; space < i; space++){
            cout << " ";
        }

        for(int j = n; j >= (2*i - n); j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 7\n";
    
    for (int i = 1; i <= n; i++) {
        for(int space = n; space > i; space--){
            cout << " ";
        }

        for(int j = 1; j <= (2*i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for(int space = 1; space < i; space++){
            cout << " ";
        }

        for(int j = n; j >= (2*i - n); j--) {
            cout << "*";
        }
        cout << endl;
    }
    

    cin.get();
    return 0;
}