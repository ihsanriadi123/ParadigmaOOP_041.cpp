#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pnama) : nama(pnama) {
		cout << "pasien \" " << nama << "\"tidak ada\n";
	}
	~pasien() {
		cout << "pasien \" " << nama << "\"tidak ada\n";
	}

};