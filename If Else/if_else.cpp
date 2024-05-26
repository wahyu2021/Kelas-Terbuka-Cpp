#include <iostream>

using namespace std;

int main() {
    int a = 2;

    cout << "Masukka angka" << endl;

    // if else statement
    // kondisi dalam bentuk boolean
    //  if(kondisi){
    //		aksi
	//	} else{
	//		aksi
	//	}
    
    
    if(a == 5) {
        cout << "nilai ini adalah 5" << endl;
    } else if (a == 3) {
        cout << "nilai ini adalah 3" << endl;
    } else {
        cout << "nilai ini bukan 3 dan 5" << endl;
    }

    cout << "selesai" << endl;

    cin.get();
    return 0;
}
