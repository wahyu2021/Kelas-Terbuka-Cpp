#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array <int,arraySize> &angka) {
    std::cout << "Array: ";
    for(int &a : angka){
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void printArray(std::array <char,arraySize> &angka) {
    std::cout << "Array: ";
    for(char &a : angka){
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main(){

    std::array <int, arraySize> angka = {9,6,8,7,4,5,3,2,1,0};
    std::array <char, arraySize> huruf = {'c','h','y','u','v','w','a','r','s','f'};
    
    printArray(angka);
    printArray(huruf);
    
    std::cout << std::endl;
    
    std::sort(angka.begin(), angka.end());
    printArray(angka);

    std::sort(huruf.begin(), huruf.end());
    printArray(huruf);
    
    std::cin.get();
    return 0;
}