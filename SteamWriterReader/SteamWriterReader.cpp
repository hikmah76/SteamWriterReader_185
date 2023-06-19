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
	//membuka file dalam mode membaca
	ifstream infile;
	//menunjuk kesebuah file
	infile.open("contohfile.text");
	
	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file anda maka 
	if (infile.is_open())
	{

		// melakukkan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selasai
		infile.close();
	}
	//jika tidak titemukan file maka akan menampilkan ini 
	else cout << "unable to open file";
	retu
}
