#include <iostream>
#include <string>
using namespace std;

void printData(int val){
    cout << val << endl;
}

int main() {

    // (expression1, expression2)
    int a;
    int b;
    int c;

    a = (b = 3, printData(b), c = 12, printData(c), (b + c));

    cout << a << endl;


    return 0;
}