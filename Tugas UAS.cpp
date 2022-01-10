#include<iostream>
using namespace std;

int main (){
	char nomenuMakanan, nomenuMinuman;
	int harga1, harga2;
	
	cout << "|-----------DAFTAR MENU-----------" << endl;
	cout << "|MAKANAN :             |  HARGA  |" << endl;
	cout << "|1. Ayam Bakar         | Rp15000 |" << endl;
	cout << "|2. Ayam Bakar + Nasi  | Rp20000 |" << endl;
	cout << "|3. Ikan Bakar         | Rp17000 |" << endl;
	cout << "|4. Ikan Bakar + Nasi  | Rp25000 |" << endl;
	cout << "|MINUMAN :                        " << endl;
	cout << "|1. Es Teh             | Rp5000  |" << endl;
	cout << "|2. Jus Alpukat        | Rp10000 |" << endl;
	cout << "|3. Jus Jeruk          | Rp10000 |" << endl;
	cout << "|4. Milkshake          | Rp15000 |" << endl;
	cout << "|---------------------------------" << endl;
	
	cout << "Silahkan pesan nomor Menu Makanan" << endl;
	cin >> nomenuMakanan;
	
	switch (nomenuMakanan){
	case '1' :
		cout << "Anda memesan Ayam Bakar" << endl;
		harga1 = 15000;
		break;
	case '2' :
		cout << "Anda memesan Ayam Bakar + Nasi" << endl;
		harga1 = 20000;
		break;
	case '3' :
		cout << "Anda memesan Ikan Bakar" << endl;
		harga1 = 17000;
		break;
	case '4' :
		cout << "Anda memesan Ikan Bakar + Nasi" << endl;
		harga1 = 25000;
		break;
	default:
		cout << "tidak ada dimenu" << endl;
	}
	cout << "Silahkan pesan nomor Menu Minuman" << endl;
	cin >> nomenuMinuman;
	
	switch (nomenuMinuman){
	case '1' :
		cout << "Anda memesan Es Teh" << endl;
		harga2 = 5000;
		break;
	case '2' :
		cout << "Anda memesan Jus Alpukat" << endl;
		harga2 = 10000;
		break;
	case '3' :
		cout << "Anda memesan Jus Jeruk" << endl;
		harga2 = 10000;
		break;
	case '4' :
		cout << "Anda memesan Milkshake" << endl;
		harga2 = 15000;
		break;
	default:
		cout << "tidak ada dimenu" << endl;
	}
	cout << "----------------------------" << endl;
	cout << "Total harga yang harus anda  bayar adalah : Rp " << harga1+harga2 << endl;
	return 0;
}
