#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream file;
    string nama, output, buffer;
    bool is_data = false;
    int no;
    
    // Open file eksternal
    file.open("data1.txt");

    while(!file.eof()){
        getline(file, buffer);
        output.append(buffer + "\n");
    }
    cout << output << endl;


    return 0;
}