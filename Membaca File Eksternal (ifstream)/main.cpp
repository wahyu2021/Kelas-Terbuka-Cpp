#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string text,newName;

    ofstream myFile;
    myFile.open("data.txt");
    getline(cin,newName);
    myFile << "\n" << newName;
    myFile.close();

    ifstream myFile("data.txt");
    while (getline(myFile,text)){
        cout << text << endl;
    }

    return 0;
}

// ios::in
// ios::ate ===> mulai dari akhir file
// ios::binary ===> membaca file binary