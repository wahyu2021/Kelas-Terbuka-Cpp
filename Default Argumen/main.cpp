#include <iostream>

using namespace std;

double volumeKubus(double p = 2, double l = 2, double t = 2);

int main() {

    cout << "volume kubus: " << volumeKubus(3, 4, 5) << endl;
    cout << "volume kubus: " << volumeKubus(3, 4) << endl;
    cout << "volume kubus: " << volumeKubus(3) << endl;
    cout << "volume kubus: " << volumeKubus() << endl;

    return 0;
}

// Default argumen

double volumeKubus(double p, double l, double t) {
    return p * l * t;
}