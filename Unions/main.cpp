#include <iostream>
#include <string>
using namespace std;

union nama{
    int intValue;
    char charValue[4];
};

int main(){
    
    nama otong;

    otong.intValue = 12345642;

    cout << "data intValue: " << otong.intValue << endl;
    cout << "data charValue: " << otong.charValue << endl;

    otong.charValue[0] = 'a';
    otong.charValue[1] = 'b';
    otong.charValue[2] = 'c';
    otong.charValue[3] = 'd';

    cout << "data intValue: " << otong.intValue << endl;
    cout << "data charValue: " << otong.charValue << endl;

    return 0;
}