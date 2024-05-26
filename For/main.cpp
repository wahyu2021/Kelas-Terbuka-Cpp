#include <iostream>

using namespace std;

int main() {

    cout << "loop 1 \n";
    for(int counter = 1; counter <= 10; counter++) {
        cout << "hore";
        cout << counter << endl;
    }

    cout << "\nloop 2 \n";
    for(int i = 1; i <= 10; i += 2) {
        cout << "hore";
        cout << i << endl;
    }

    cout << "\nloop 3 \n";
    for(int j = 10; j >= 1; j--) {
        cout << "hore";
        cout << j << endl;
    }

    return 0;
}