#include <iostream>
#include <string>

using namespace std;

float pokok(int jamkerja);
float lembur(int jamkerja);
float jasa(int jamkerja);
float makan(int jamkerja);
float gaji(int jamkerja);
void garis();

int main() {
    string nama;
    int jamkerja;
    		 cout << "\n                                        <-------! PUNYA DHANNEYY !-------> :D\n";
    	
    	        /* Cetak Judul Program */
        cout << "\n\nProgram Untuk Menghitung Gaji Karyawan PT. Rejeki Nomplok";
        cout << "\n\nUntuk Menghentikan Program, masukkan X pada Nama Karyawan.\n";

    while (true) {
        garis();

        /* Input Data */
        cout << "\nMasukkan Nama Karyawan: ";
        cin >> nama;

        cout << "Masukkan Jam Kerja: ";
        cin >> jamkerja;

        /* Cetak Output */
        cout << "\n\n";
		garis();
        cout << "Gaji Pokok       = Rp. " << pokok(jamkerja) << endl;
        cout << "Uang Lembur      = Rp. " << lembur(jamkerja) << endl;
        cout << "Uang Makan       = Rp. " << makan(jamkerja) << endl;
        cout << "Uang Jasa Lembur = Rp. " << jasa(jamkerja) << endl;
        cout << "Gaji Bersih      = Rp. " << gaji(jamkerja) << endl;
        garis();
    }

    return 0;
}

void garis() { /* Menggambar Garis */
    cout << "\n";
    for (int i = 1; i <= 50; ++i)
        cout << "=";
    cout << endl;
}

// Fungsi untuk menghitung gaji pokok
float pokok(int jamkerja) {
    return (jamkerja > 7 ? 7 : jamkerja) * 2000;
}

// Fungsi untuk menghitung uang lembur
float lembur(int jamkerja) {
    return jamkerja > 7 ? (jamkerja - 7) * 3000 : 0;
}

// Fungsi untuk menghitung uang makan
float makan(int jamkerja) {
    if (jamkerja > 10) return 2500;
    if (jamkerja >= 8) return 1500;
    return 0;
}

// Fungsi untuk menghitung uang jasa lembur
float jasa(int jamkerja) {
    return jamkerja > 11 ? 3000 : 0;
}

// Fungsi untuk menghitung total gaji
float gaji(int jamkerja) {
    return pokok(jamkerja) + lembur(jamkerja) + makan(jamkerja) + jasa(jamkerja);
}
