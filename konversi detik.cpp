#include <iostream>
using namespace std;

int main() {
	int hari, jam, menit;
	cout << "Konversi dari hari, jam dan menit ke satuan detik. \n";
	cout << "Masukan nilai Hari : ";
	cin >> hari;
	cout << "Masukan nilai Jam : ";
	cin >> jam;
	cout << "masukan nilai Menit : ";
	cin >> menit;
	cout << hari << " Hari = " << hari*24*60*60 << " Detik. \n";
	cout << jam << " Jam = " << jam*60*60 << " Detik. \n";
	cout << menit << " Menit = " << menit*60 << " Detik. \n";
	
	return 0;
}
