#include <iostream>
//#include <array>
using namespace std;


int main(){
    
    // looping untuk array di c++11 ke atas
    /*
        for(declarasi variabel : array) {
            statement;
        }
    */
    
    int arrayNilai[13] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
    
    for(int nilai : arrayNilai) {
        cout << "address " << &nilai << " nilainya: " << nilai << endl;
        nilai = 1; // tidak merubah array
    }
    cout << endl;
    for(int &nilaiRef : arrayNilai) {
        nilaiRef *= 2;
        cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }
    
    cout << endl;
    for(int &nilaiRef : arrayNilai) {
        cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }
    
    
	cin.get();
    return 0;
}