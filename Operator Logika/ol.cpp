 ,,#include <iostream>

using namespace std;

int main() {
	// Operator Logika
	int a = 3;
	int b = 2;
	
	bool hasil;
	
	// AND 2 true untuk menghasilkan nilai akhir true ( and atau &&)
	hasil = (a == 3) && (b == 2);
	cout << hasil << endl;
	
	// OR 1 true untuk menghasilkan nilai akhir true ( or atau || )
	hasil = (a == 2) || (b == 2);
	cout << hasil << endl;
	
	// NOT ( ! )
	hasil = !(a == 3);
	cout << hasil << endl;
	
	return 0;
}
