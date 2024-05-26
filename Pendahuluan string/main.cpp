#include <iostream>
#include <string>
using namespace std;

int main(){

    //char kata[5] = {'m','o','b','i','l'};
    string kata("mobil");

    cout << kata << endl;

    string data;
    cout << "Masukkan kata" << endl;
    cin >> data;
    cout << "data yang dimasukkan adalah "<< endl;
    cout << data << endl;

    cin.get();
    return 0;
}