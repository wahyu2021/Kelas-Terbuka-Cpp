#include <iostream>
#include <bitset>
#include <string>

using namespace std;

/*
    Bitwise Operator
    &  =  AND Bitwise AND
    |  =  OR Bitwise inclusive OR
    ^  =  XOR Bitwise exclusive OR
    ~  =  NOT
    << =  SHL Shift bits left
    >> =  SHL Shift bits right
*/

void printBinary(unsigned short val, string nama) {
    cout << nama << " = " << bitset<8>(val) << endl;

}

int main() {

    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << "&  =  AND Bitwise AND" << endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    return 0;
}