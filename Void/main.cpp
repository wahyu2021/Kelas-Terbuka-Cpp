#include <iostream>
using namespace std;

int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

void tampilkan(int input)
{
    cout << "menampilkan dengan void \n";
    cout << input << endl;
}

int main()
{

    int input, hasil, a, b, hasil2;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    return 0;
}