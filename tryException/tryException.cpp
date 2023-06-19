#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "Pertannyaan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi 
		cout << "Pengecualian akan di eksekusi" << endl;
	}
	cath(...) {
		/*jika selain integer maka blok ini akan dieksekusi*/
		cout << "default pengecualian dieksekusi" << endl;
	}
	return 0;
}

