#include <iostream>

using namespace std;

void fungsi(int *b){
    cout << "address" << b << endl;
    cout << "nilai" << *b << endl;
}

int kuadrat(int *valPtr){
    return (*valPtr)*(*valPtr);
}

int main(){
	int a = 5;
    int b = 7;
    fungsi(&a);
    kuadrat(&b);
    cout << b << endl;

    return 0;
}