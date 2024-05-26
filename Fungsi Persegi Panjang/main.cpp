#include <iostream>
using namespace std;

double luasPersegiPanjang(double p, double l)
{
    double luas = p * l;
    return luas;
}

double kelilingPersegiPanjang(double p, double l)
{
    double keliling = 2 * (p + l);
    return keliling;
}

void persegiPanjang(double p, double l)
{
    cout << "luasnya adalah: " << luasPersegiPanjang(p, l) << endl;
    cout << "kelilingnya adalah: " << kelilingPersegiPanjang(p, l) << endl;
}

int main()
{

    double panjang, lebar;

    cout << "panjang: ";
    cin >> panjang;
    cout << "lebar: ";
    cin >> lebar;

    persegiPanjang(panjang, lebar);

    return 0;
}