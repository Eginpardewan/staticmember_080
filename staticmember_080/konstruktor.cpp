#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	mahasiswa();
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};

mahasiswa::mahasiswa() {
	nim = 0;
	nama = "";
}

void mahasiswa::cetak() {

	cout << endl << "Nim =" << nim << endl; cout << " Nama = " << nama << endl;
}

int main() {

	mahasiswa mhs2(20);

	mahasiswa mhs1; mahasiswa mhs4(30, "Fauzan");

	mahasiswa mhs3("Indra");

	mhs1.cetak();

	mhs2.cetak();

	mhs3.cetak();

	mhs4.cetak();

	return 0;