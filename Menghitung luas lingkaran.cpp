#include <iostream>
using namespace std;

int main() {
	int jariJari;
	int diameter = jariJari*2;
	float pi = 3.14;
	float first = 1/4;
	cout << "Menghitung luas sebuah lingkaran. \n";
	cout << "Masukan nilai jari-jari lingkaran : ";
	cin >> jariJari;
	cout << "Luas lingkaran berdasarkan nilai Jari-jari yang anda berikan yaitu " << jariJari << " adalah : " << pi*jariJari*jariJari;
	
	return 0;
}
