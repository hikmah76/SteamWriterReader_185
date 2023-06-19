

#include <iostream>
#include <exception>
//untuk objek exception yang akan digunakan 
#include <array>
//untuk obyek array yang digunakan 
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1
	try {
		array<int, 3> data = { 1,2,3 };
		//pesan array integer 3 elemen
		cout << e.what() << endl;
		//akan dieksekusi karena array data hannya memili 3 elemet
	}
	catch (exception& e) {
		//penangkap emnggunakan obyek exception
		cout << e.what() << endl;
		/*akan dieksekusi karena array data hannya memiliki 3 element*/
	}
	cout << "Baris program yang terakhir" << endl;
	/*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
	return 0;
}

