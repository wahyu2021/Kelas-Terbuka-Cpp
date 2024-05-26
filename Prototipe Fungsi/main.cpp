#include <iostream>
using namespace std;

//prototipe
double hitungLuas(double p, double l);
void println(double x);

int main() {

    double panjang, lebar, luas;
    cin >> panjang;
    cin >> lebar;
    luas = hitungLuas(panjang, lebar);

    println(luas);


    return 0;
}

double hitungLuas (double p, double l) {
    return p*l;
}

void println(double x) {
    cout << "hasil: " << x << endl;
}


