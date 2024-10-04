#include<iostream>
using namescpace std;

int main() {
    int pilihan;
    int operand1, operand2, hasil;

    cout << "Pilih operasi matematika:" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;
    cout << "Masukkan dua angka: ";
    cin >> operand1 >> operand2;

    switch (pilihan) {
        case 1:
            hasil = tambah(operand1, operand2);
            cout << "Hasil dari Penjumlahan untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        case 2:
            hasil = kurang(operand1, operand2);
            cout << "Hasil dari Pengurangan untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        case 3:
            hasil = kali(operand1, operand2);
            cout << "Hasil dari Perkalian untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        case 4:
            hasil = bagi(operand1, operand2);
            if (operand2 != 0)
                cout << "Hasil dari Pembagian untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
