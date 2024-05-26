#include <iostream>
#include <array>
using namespace std;


int main(){

    array <int, 10> angka;

    for(int i=0; i<10; i++){
        angka[i] = i + 1;
        cout << "array ke-" << i << " adalah angka " << angka[i] << endl;
    }
	
    return 0;
}