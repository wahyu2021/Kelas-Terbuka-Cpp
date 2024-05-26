#include <iostream>
using namespace std;

int main ()
{
	char tampilkan[1];
	char panjang[50];
	
	cout<< "=============================================== \n";
	cout<< "		 Bahasa Pemograman C++					\n";
	cout<< "=============================================== \n";
	cout<< "Nama : ";
	cin.getline(panjang,50);
	cout<< "umur : ";
	cin.getline(panjang,50);
	cout<< "Jenis Kelamin : ";
	cin.getline(panjang,50);
	cout<< "Alamat : ";
	cin.getline(panjang,50);
	cout<< "tempat tanggal lahir : ";
	cin.getline(panjang,50);
	cout<< "Ho HP : ";
	cin.getline(panjang,50);
	cout<< "jurusan : Manajemen Informatika - Polsri " <<endl;


	cin.getline(tampilkan,1);
	return 0;
}