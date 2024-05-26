#include <iostream>
#include <array>
#include <exception>

using namespace std;

// 1. syntax error
// 2. linking error
// 3. non-error
// 4. runtime error

int main(){

    array <int, 5> a = {0,1,2,3,4};

    try{
        cout << a .at(5) << endl;
    }catch(exception &e){
        cout << e.what( ) << endl;
    }

    cout << "akhir dari program" << endl;

    return 0;
}