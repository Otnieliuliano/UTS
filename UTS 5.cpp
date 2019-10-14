#include <iostream>
using namespace std;

int main ( ) {

	
	float  total ;
	
	cout << "Masukkan Total Pengeluaran anda selama 1 minggu = " ;
	cin >> total ;
	
	if ( total >= 500000 ) {
		cout << "Ayo, Anda Harus Hemat" ;
	}
	
	else if ( total <= 150000 ) {
		cout << "Hebat, Anda Sudah Pandai Mengatur pengeluaran" ;
	}
	
	return 0;
}
