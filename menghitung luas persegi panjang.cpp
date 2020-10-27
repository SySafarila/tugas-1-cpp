#include <iostream>
using namespace std;

int main() {
	int panjang, lebar;
	cout << "Menghitung luas persegi panjang dengan rumus P x L. \n";
	cout << "Masukan nilai Panjang nya : ";
	cin >> panjang;
	cout << "Masukan nilai Lebar nya : ";
	cin >> lebar;
	cout << "Nilai persegi panjang dari " << panjang << " X " << lebar << " adalah : " << panjang*lebar << "cm";
	return 0;
}
