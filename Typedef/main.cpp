#include <iostream>

using namespace std;

int main(){

    // typedef adalah memberikan alias untuk tipe data
    typedef int I;
    typedef int ivector2D[2];
    typedef unsigned long unlong;
    typedef double vector[2];

    using numbers = double;

    I a = 10;
    ivector2D b = {1,2};
    unlong c = 842023822;
    vector d = {10.980, 15.123};
    numbers e = 10.212312;

    cout << "nilai a: " << a << endl;
    cout << "nilai b: " << b[0] << " dan " << b[1] << endl;
    cout << "nilai c: " << c << endl;
    cout << "nilai d: " << d[0] << " dan " << d[1] << endl;
    cout << "nilai e: " << e << endl;

    return 0;
}