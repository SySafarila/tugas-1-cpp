#include <iostream>
using namespace std;

int main() {
	int jariJari;
	float pi = 3.14;
	cout << "Menghitung luas sebuah lingkaran. \n";
	cout << "Masukan nilai jari-jari lingkaran : ";
	cin >> jariJari;
	cout << "Luas lingkaran berdasarkan nilai Jari-jari yang anda berikan yaitu " << jariJari << " adalah : " << 2*pi*jariJari;
	
	return 0;
}
