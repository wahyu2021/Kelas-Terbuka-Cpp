#include <iostream>
#include <cmath>

using namespace std;


/*
libary cmath: referensi www.cppreference.com
ceil(x)         <-- Pembulatan ke atas
cos(x)          <-- cosinus
exp(x)          <-- eksponen
fabs(x)         <-- nilai absolut dalam float
floor(x)        <-- pembulatan ke bawah
fmod(x)         <-- modulus dalam float
log(x)          <-- logaritma dalam basis natural
log10(x)        <-- logaritma dalam basis 10
pow(x,y)        <-- x pangkat y
sin(x)          <-- sinus
sqrt(x)         <-- akar kuadrat
tan(x)          <-- tangen
*/



int main() {

    int x;

    cout << "Menghitung Akar dari x: ";
    cin >> x;

    cout << "akarna adalah; " << sqrt(x);

    return 0;
}