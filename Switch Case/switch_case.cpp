#include <iostream>

using namespace std;

int main()
{

    int a;

    cout << "masukkan nilai" << endl;
    cin >> a;

    switch (a)
    {
    case 5:
        cout << "benar itu adalah 5" << endl;
        break;
    default:
        cout << "default" << endl;
    }

    cout << "akhir dari program" << endl;

    cin.get();
    return 0;
}