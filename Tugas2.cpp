#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama[10];
    float penjualan[10],komisi[10],totalkomisi=0;
    int i,jlhsales=10;
cout << "                                        <-------! PUNYA DHANNEYY !-------> :D" << endl;
    cout << "Input Penjualan Sales" << endl;
    cout << "!--------------------!" << endl << endl;
    cout << setprecision(12);

    for (i = 0; i < jlhsales; i++) {
        cout << "Data Salesman ke-" << i + 1 << endl;
        cout << "Masukan Nama Salesman : ";
        cin >> nama[i];
        cout << "Masukan Penjualan Salesman : ";
        cin >> penjualan[i];
        

        if(penjualan[i] < 500000){
        	komisi[i] = penjualan[i] * 0.1;
		}else{
			komisi[i] = 500000 * 0.1; //500k pertama di hitung 10%
			//lalu
            komisi[i] += (penjualan[i] - 500000) * 0.15; //hasil pengurangan dalam kurung dikali kan 0.15, lalu di + hasil dari 10% pertama diatas
             cout<<endl<<"*-------------------------------------*"<<endl<<endl;
		}
			totalkomisi += komisi[i]; // totalkomisi adalah 0, maka totalkomisi=0 + komisi yang sudah dihitung di atas
		}
		
		cout<<endl<<"* "<<"Total komisi yang dibayarkan oleh PT. MURAH HATI adalah: "<< totalkomisi<<" *"<< endl; // total komisi dijumlahkan dari 10 komisi salesman yang sudah di hitung
		
cin.ignore(); //mengosongkan memory buffer
    return 0;
}
