#pragma warning(disable:4996)

#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

/* Class Induk */
class Hewan {
protected:
	int aJumlahKaki;
	char aNama[100];
	char aWarna[100];

public:
	/* Constructor */
	Hewan() {
		cout << "Constructor class Hewan dijalankan!" << endl;
	}

	/* Setter */
	void setJumlahKaki(int pJumlahKaki) {
		this->aJumlahKaki = pJumlahKaki;
	}

	void setNama(const char n[100]) {
		strcpy(aNama, n);
	}

	void setWarna(const char w[100]) {
		strcpy(aWarna, w);
	}

	/* Getter */
	int getJumlahKaki() {
		return aJumlahKaki;
	}

	char* getNama() {
		return aNama;
	}

	char* getWarna() {
		return aWarna;
	}
};

/* Class Turunan dari Class Hewan */
class Ayam :public Hewan {
private:
	int aParuh;

public:
	/* Constructor */
	Ayam() {
		cout << "Constructor class Ayam dijalankan!" << endl;
	}

	/* Setter */
	void setParuh(int prh) {
		this->aParuh = prh;
	}

	/* Getter */
	int getParuh() {
		return aParuh;
	}
};

/* Class Turunan Dari Hewan */
class Kucing :public Hewan {
private:
	char aJenis[100];

public:
	/* Constructor */
	Kucing() {
		cout << "Constructor class Kucing dijalankan!" << endl << endl;
	}

	/* Setter */
	void setJenis(const char Jenis[100]) {
		strcpy(aJenis, Jenis);
	}

	/* Getter */
	char* getJenis() {
		return aJenis;
	}
};


int main() {
	/* Implementasi Objek */

	Kucing K1;
	Ayam A1;

	K1.setJenis("Persia");		/* Fungsi Yang Berasal dari Class nya sendiri (Class Kucing) */
	K1.setJumlahKaki(4);		/* Fungsi Yang Berasal dari Class Induk: (Class Hewan) */
	K1.setNama("Maong");		/* Fungsi Yang Berasal dari Class Induk: (Class Hewan) */
	K1.setWarna("Oren");		/* Fungsi Yang Berasal dari Class Induk: (Class Hewan) */

	A1.setParuh(1);				/* Fungsi Yang Berasal dari Class nya sendiri (Class Ayam) */
	A1.setJumlahKaki(2);		/* Fungsi Yang Berasal dari Class Induk: (Class Hewan) */
	A1.setNama("Marvel");		/* Fungsi Yang Berasal dari Class Induk: (Class Hewan) */
	A1.setWarna("Hitam");		/* Fungsi Yang Berasal dari Class Induk: (Class Hewan) */
	
	cout << "\nDiatas adalah pembuktian Constructor yang mana duluan yang dijalankan!\n" << endl;

	cout << "==============================" << endl << "KUCING" << endl << "==============================" << endl;
	cout << "Nama          : " << K1.getNama() << endl;
	cout << "Jenis         : " << K1.getJenis() << endl;
	cout << "Jumlah Kaki   : " << K1.getJumlahKaki() << endl;
	cout << "Warna         : " << K1.getWarna() << endl << endl;

	cout << "==============================" << endl << "AYAM" << endl << "==============================" << endl;
	cout << "Nama          : " << A1.getNama() << endl;
	cout << "Jumlah Kaki   : " << A1.getJumlahKaki() << endl;
	cout << "Paruh         : " << A1.getParuh() << endl;
	cout << "Warna         : " << A1.getWarna() << endl << endl;

	_getch();
	return 0;
}