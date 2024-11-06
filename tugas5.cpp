#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

int main() {
    const int maxMahasiswa = 50;
    char namaMahasiswa[maxMahasiswa][50], kode[3], jurusan[maxMahasiswa][30];
    int pembayaranAwal, npm, jumlahCicilan, besarCicilan;
    int pembayaranKe, uangKuliah[maxMahasiswa], uangKuliahTerbayar[maxMahasiswa], sisaUangKuliah[maxMahasiswa];
    int jlhMhs = 0;
    char lanjut;

    cout << "                                        <-------! PUNYA DHANNEYY !-------> :D" << endl;
    
    cout << setprecision(12);
    cout << "!------------------------------------------!" << endl << endl;

    do {
        if (jlhMhs >= maxMahasiswa) {
            cout << "Jumlah mahasiswa sudah mencapai maksimum!" << endl;
            break;
        }

        cout << "Nama Mahasiswa            : ";
        cin.ignore(); // Mengabaikan newline sebelumnya
        cin.getline(namaMahasiswa[jlhMhs], 50); // Menggunakan getline untuk input nama mahasiswa
        cout << "NPM                       : ";
        cin >> npm;
        cout << "Kode Jurusan (SI/TI/KA/MI): ";
        cin >> kode;

        // Logika untuk menentukan jurusan, pembayaran awal, jumlah cicilan, dan besar cicilan
        if (strcmp(kode, "SI") == 0) {
            strcpy(jurusan[jlhMhs], "Sistem Informasi");
            pembayaranAwal = 2100000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
        } else if (strcmp(kode, "TI") == 0) {
            strcpy(jurusan[jlhMhs], "Teknik Informatika");
            pembayaranAwal = 2500000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
        } else if (strcmp(kode, "KA") == 0) {
            strcpy(jurusan[jlhMhs], "Komputer Akutansi");
            pembayaranAwal = 1750000;
            jumlahCicilan = 6;
            besarCicilan = 200000;
        } else if (strcmp(kode, "MI") == 0) {
            strcpy(jurusan[jlhMhs], "Manajemen Informatika");
            pembayaranAwal = 1500000;
            jumlahCicilan = 6;
            besarCicilan = 250000;
        } else {
            cout << "Kode jurusan tidak valid!" << endl;
            continue;
        }

        cout << "Jurusan                   : " << jurusan[jlhMhs] << endl;
        cout << "Pembayaran Awal           : " << pembayaranAwal << endl;
        cout << "Jumlah Cicilan            : " << jumlahCicilan << endl; 
        cout << "Besar Cicilan             : " << besarCicilan << endl; 
        
        // Input Pembayaran Ke dengan Maksimum Jumlah Cicilan
        do {
            cout << "Pembayaran ke (Max " << jumlahCicilan << ")     : ";
            cin >> pembayaranKe;

            if (pembayaranKe > jumlahCicilan) {
                cout << "Pembayaran ke tidak boleh lebih dari " << jumlahCicilan << "! Silakan input lagi." << endl;
            }
        } while (pembayaranKe > jumlahCicilan);

        // Menghitung total uang kuliah
        uangKuliah[jlhMhs] = pembayaranAwal + (jumlahCicilan * besarCicilan);
        cout << "Uang Kuliah               : " << uangKuliah[jlhMhs] << endl;
        
        // Menghitung uang kuliah terbayar dan sisa uang kuliah
        uangKuliahTerbayar[jlhMhs] = pembayaranAwal + (pembayaranKe * besarCicilan);
        sisaUangKuliah[jlhMhs] = uangKuliah[jlhMhs] - uangKuliahTerbayar[jlhMhs];

        cout << "Uang Kuliah Terbayar      : " << uangKuliahTerbayar[jlhMhs] << endl;
        cout << "Sisa Uang Kuliah          : " << sisaUangKuliah[jlhMhs] << endl;

        jlhMhs++;

        cout << "Masih Ingin Menghitung [Y/T]: ";
        cin >> lanjut;
        cin.ignore();  // Untuk menghindari masalah dengan input nama mahasiswa di berikutnya

    } while (lanjut == 'Y' || lanjut == 'y');

    cout << endl << "*------------------------------------------*" << endl << endl;
    cout << "\n+-----+----------------------+-------------------------+--------------------+---------------------------+--------------------+" << endl;
    cout << "| No  | Nama Mahasiswa       | Jurusan                 | Uang Kuliah        | Uang Kuliah Terbayar      | Sisa Uang Kuliah   |" << endl;
    cout << "+-----+----------------------+-------------------------+--------------------+---------------------------+--------------------+" << endl;

    for (int i = 0; i < jlhMhs; i++) {
        cout << "| " << left << setw(3) << i + 1
             << " | " << left << setw(20) << namaMahasiswa[i]
             << " | " << left << setw(23) << jurusan[i]
             << " | " << left << setw(18) << uangKuliah[i]
             << " | " << left << setw(25) << uangKuliahTerbayar[i]
             << " | " << left << setw(18) << sisaUangKuliah[i] << " |" << endl;
    }

    cout << "+-----+----------------------+-------------------------+--------------------+---------------------------+--------------------+" << endl;

    return 0;
}
