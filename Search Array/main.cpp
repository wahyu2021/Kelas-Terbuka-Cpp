#include <iostream>
#include <algorithm>
#include <array>

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
    std::cout << "array: ";
    for(int &a :angka) {
        std::cout << a << " ";
    }std::cout << std::endl;
}
void printArray(std::array <char, arraySize> &angka){
    std::cout << "array: ";
    for(char &a :angka) {
        std::cout << a << " ";
    }std::cout << std::endl;
}

int main(){
    
    std::array <int, arraySize> angka = {5,3,4,1,7,8,9,0,6,2};
    printArray(angka);
    int angkaCari = 5;
    bool ketemu;

    // Sort dulu
    // seacrh -> binary_seacrh

    std::cout << "mencari angka dalam array diatas \n";
    std::cin >> angkaCari;
    std::sort(angka.begin(), angka.end());
    ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

    if(ketemu){
        std::cout << "ketemu" << std::endl;
    } else {
        std::cout << "tidak ketemu" << std::endl;
    }

    std::cin.get();
    return 0;
}
