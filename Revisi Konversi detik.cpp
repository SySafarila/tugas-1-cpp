#include <iostream>
using namespace std;

int main() {
	float detik;
	cout << "Konversi Deti ke Hari, Jam, dan Menit \n \n";
	cout << "Masukan nilai Detik : ";
	cin >> detik;
	cout << detik << " Detik = " << detik / 60 << " Menit \n";
	cout << detik << " Detik = " << detik / 60 / 60 << " Jam \n";
	cout << detik << " Detik = " << detik / 60 / 60 / 24 << " Hari \n";
	return 0;
}
