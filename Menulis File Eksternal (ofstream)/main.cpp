#include <iostream>
#include <fstream> // ofstream(auto output file), ifstream (input file), fstream (campuran 1 dan 2)
using namespace std;

int main(){
    
    ofstream myFile;

    myFile.open("nama1.txt", ios::out);
    myFile << "Wahyu Wahid Nugroho";
    myFile.close();
    myFile.open("nama2.txt", ios::out);
    myFile << "Dhea Fasya Nadhira";
    myFile.close();
    return 0;
}