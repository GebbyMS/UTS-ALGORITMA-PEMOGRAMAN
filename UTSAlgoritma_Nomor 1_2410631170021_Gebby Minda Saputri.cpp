#include<iostream>
using namespace std;

int main (){
    string nama, NPM;
    float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char hurufMutu;

    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan NPM: ";
    cin >> NPM;
    cout << "Masukkan Nilai Absen (10%): ";
    cin >> nilaiAbsen;
    cout << "Masukkan Nilai Tugas (20%): ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS (30%): ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS (40%): ";
    cin >> nilaiUAS;

    nilaiAkhir = (nilaiAbsen * 0.1) + (nilaiTugas * 0.2) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);

    if (nilaiAkhir >= 85){
        hurufMutu = 'A';
    } else if (nilaiAkhir >=80){
        hurufMutu= 'B';
    } else if (nilaiAkhir >=75){
        hurufMutu= 'C';
    } else if (nilaiAkhir >=70){
        hurufMutu= 'D';
    } else {
        hurufMutu= 'E';
        }
    cout << endl;
        cout << "Nama: " << nama << endl;
        cout << "NPM: " << NPM << endl;
        cout << "Nilai Absen (10%): " << nilaiAbsen << endl;
        cout << "Nilai Tugas (20%): " << nilaiTugas << endl;
        cout << "Nilai UTS (30%): " << nilaiUTS << endl;
        cout << "Nilai UAS (40%): " << nilaiUAS << endl;
        cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}
