#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct mahasiswa {
    char npm[9];
    char nama[30];
    int nMid;
    int nSms;
    int nAkhir;
    char nHuruf;
} mhs[100];

int main() {
    char lg = 'Y';
    int n = 0;

    do{
        system("cls"); // FUNGSI CLEARSCREEN
        gotoxy(34, 0);
        cout << "+--------------------------------------------+\n"; // INPUT DATA NILAI MAHASISWA
        gotoxy(35, 1);
        cout << "Data Nilai Ujian Pemrograman C++\n";
        gotoxy(35, 2);
        cout << "Dosen          : Budiman, S.SI\n";
        gotoxy(34, 3);
        cout << "+--------------------------------------------+\n";
        n++;
        
        gotoxy(35, 4);
        cout << "NPM            : ";
        cin.ignore();
        cin.getline(mhs[n].npm, 9);
        gotoxy(35, 5);
        cout << "Nama           : ";
        cin.getline(mhs[n].nama, 30);
        gotoxy(35, 6);
        cout << "Nilai Mid      : ";
        cin >> mhs[n].nMid;
        gotoxy(35, 7);
        cout << "Nilai Semester : ";
        cin >> mhs[n].nSms;

        mhs[n].nAkhir = static_cast<int>(0.4 * mhs[n].nMid + 0.6 * mhs[n].nSms); // MENGHITUNG NILAI AKHIR
        
        // LOGIKA MENENTUKAN NILAI HURUF A/B/C/D/E
        if (mhs[n].nAkhir >= 80)
            mhs[n].nHuruf = 'A';
        else if (mhs[n].nAkhir >= 70)
            mhs[n].nHuruf = 'B';
        else if (mhs[n].nAkhir >= 55)
            mhs[n].nHuruf = 'C';
        else if (mhs[n].nAkhir >= 40)
            mhs[n].nHuruf = 'D';
        else
            mhs[n].nHuruf = 'E';

        gotoxy(35, 8);
        cout << "Nilai Akhir    : " << mhs[n].nAkhir << endl;
        gotoxy(35, 9);
        cout << "Nilai Huruf    : " << mhs[n].nHuruf << endl;
        gotoxy(34, 10);
        cout << "+--------------------------------------------+\n";
        gotoxy(35, 11);
        cout << "Input Lagi [Y/T] : ";
        lg = getch();
    }while (lg == 'Y' || lg == 'y'); 

    system("cls"); // FUNGSI CLEARSCREEN
    cout << "\n+-----+----------------------+-------------------------+--------------------+---------------------------+--------------------+--------------+\n";
    cout << "| No  | NPM                  | Nama                    | Nilai Mid          | Nilai Semester            | Nilai Akhir       | Nilai Huruf  |\n";
    cout << "+-----+----------------------+-------------------------+--------------------+---------------------------+--------------------+--------------+\n";

    // OUTPUT DATA NILAI MAHASISWA
    for (int i = 1; i <= n; i++) {
    cout << "| " << left << setw(3) << i 
         << " | " << left << setw(20) << mhs[i].npm 
         << " | " << left << setw(23) << mhs[i].nama 
         << " | " << left << setw(18) << mhs[i].nMid 
         << " | " << left << setw(25) << mhs[i].nSms 
         << " | " << left << setw(17) << mhs[i].nAkhir 
         << " | " << left << setw(12) << mhs[i].nHuruf << " |\n";
    }

    cout << "+-----+----------------------+-------------------------+--------------------+---------------------------+--------------------+--------------+\n";
    
    return 0;
}
