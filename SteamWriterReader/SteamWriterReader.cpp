#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	
	//menulis file dalam mode menulis
	ofstream outfile;
	//menunjuk kesebuah nama file
	outfile.open("contohfile.text");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;
	
	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan satu karakter dalam satu baris 
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter 4
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	// selesai dalam menulis sekarang tutup file
	outfile.close();
	//

}
