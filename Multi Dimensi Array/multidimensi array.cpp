#include<iostream>
using namespace std;

void printArray (int *ptrArray, int baris, int kolom){
    int index = 0;
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << endl;
    }
}

int main(){
    
    // array multidimensi
    /*  seperti Matriks
        int array[baris][kolom] = {1,2,3,4,5};
    */
    
    int arrayMD[2][2] = {1,2,3,4};
    
    printArray(*arrayMD, 2,2);
    cin.get();
    return 0;
}