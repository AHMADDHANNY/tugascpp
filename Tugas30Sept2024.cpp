#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int maxBg = 50;            
    string namaBg[maxBg];             
    int hargaUnit[maxBg];
	int jumlahUnit[maxBg];
	float jumlahJual[maxBg];
	float totalPerBg[maxBg];
	float total[maxBg];
    int jumlahBg = 0;              
    char lagi;                      

	cout << "                                        <-------! PUNYA DHANNEYY !-------> :D" << endl;
	cout << "!------------------------------------------!" << endl << endl;
    do {
    	cout << setprecision(12);
	cout << "Barang ke - " << jumlahBg + 1 << endl;
        cout << "Masukkan Nama Barang : ";
        cin >> namaBg[jumlahBg];

        cout << "Masukkan Harga Barang " << namaBg[jumlahBg] << ": ";
        cin >> hargaUnit[jumlahBg];

        cout << "Masukkan Jumlah Barang " << namaBg[jumlahBg] << ": ";
        cin >> jumlahUnit[jumlahBg];
        cout<<endl<<"*------------------------------------------*"<<endl<<endl;

        total[jumlahBg] = hargaUnit[jumlahBg] * jumlahUnit[jumlahBg];

        jumlahBg++;

        cout << "Apakah ingin menambah karyawan lagi? (y/n): ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    cout <<
	"*!===================================================================================!*" << endl;
    cout << setw(5)  << "No"
         << setw(20) << "Nama Brg"
         << setw(20) << "Harga perBrg"
         << setw(20) << "Jumlah Terjual"
         << setw(20) << "Total Pendapatan" << endl;
    cout <<
    "*!===================================================================================!*" << endl;

    for(int i = 0; i < jumlahBg; i++){
        cout << setw(4)  << i + 1
             << setw(20) << namaBg[i]
             << setw(15) << hargaUnit[i]
             << setw(20) << jumlahUnit[i]
             << setw(20) << total[i] << endl;
    }
    cout << "*!===================================================================================!*" << endl;
    
    return 0;
}
