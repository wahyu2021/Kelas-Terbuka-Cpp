#include <iostream>
using namespace std;

int main() {

    int a = 5;
    float b = 6.67f;
    char c = 'd';

    float hasil;
    hasil = a + (int)b;

    cout << hasil << endl;
    cout << (int)c << endl;
    cout << (char)(c + a) << endl;
    

    return 0;
}