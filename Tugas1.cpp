#include <iostream>
using namespace std;

int main() {
    char tipeRumah, jenisPembayaran;
    char namaPembeli[32];
    long long hargaRumah, angsuranPerBulan;
    long long totalHargaRumah = 0;

    // Input
    cout << "<-------! PUNYA DHANNEYY !-------> :D" << endl;
    cout << "Masukan Nama Pembeli : ";
    cin >> namaPembeli;
    cout << "Masukkan Tipe Rumah (A-D): ";
    cin >> tipeRumah;
    cout << "Masukkan Jenis Pembayaran ( (K) untuk Kredit, (T) untuk Tunai): ";
    cin >> jenisPembayaran;

    switch (tipeRumah) {
        case 'A':
        case 'a':
            if (jenisPembayaran == 'K' || jenisPembayaran == 'k') { // Kredit
                hargaRumah = 50000000;
                angsuranPerBulan = 500000;
                totalHargaRumah = hargaRumah * 12 * 10;
            } else { // Tunai
                hargaRumah = 50000000;
            }
            break;
        case 'B':
        case 'b':
            if (jenisPembayaran == 'K' || jenisPembayaran == 'k') { // Kredit
                hargaRumah = 75000000;
                angsuranPerBulan = 750000;
                totalHargaRumah = hargaRumah * 12 * 10;
            } else { // Tunai
                hargaRumah = 75000000;
            }
            break;
        case 'C':
        case 'c':
            if (jenisPembayaran == 'K' || jenisPembayaran == 'k') { // Kredit
                hargaRumah = 85000000;
                angsuranPerBulan = 1000000;
                totalHargaRumah = hargaRumah * 12 * 10;
            } else { // Tunai
                hargaRumah = 85000000;
            }
            break;
        case 'D':
        case 'd':
            if (jenisPembayaran == 'K' || jenisPembayaran == 'k') { // Kredit
                hargaRumah = 1000000;
                angsuranPerBulan = 1000000;
                totalHargaRumah = hargaRumah * 12 * 10;
            } else { // Tunai
                hargaRumah = 1000000;
            }
            break;
        default:
            cout << "Tipe Rumah tidak valid!" << endl;
            return 1;
    }

    // Output
    if (jenisPembayaran == 'K' || jenisPembayaran == 'k') { // Kredit
        cout << "Angsuran per Bulan: Rp. " << angsuranPerBulan << endl;
        cout << "Total Harga Rumah: Rp. " << totalHargaRumah << endl;
    } else if (jenisPembayaran == 'T' || jenisPembayaran == 't') { // Tunai
        cout << "Harga Rumah: Rp. " << hargaRumah << endl;
    } else {
        cout << "Tidak Valid, Masukan Lagi!" << endl;
    }

    return 0;
}
