#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template<typename T, typename U>
auto max(T a, U b){
    return (a > b) ? T(a) : U(b);
}

int main(){
    
    int a = 15;
    string b = "test";
    double c = 15.432;
    float d = 14.5f;
    auto e = max(a,c);

    cout << a << typeid(a).name() << endl;
    cout << b << typeid(b).name() << endl;
    cout << c << typeid(c).name() << endl;
    cout << d << typeid(d).name() << endl;
    cout << e << typeid(e).name() << endl;

    return 0;
}