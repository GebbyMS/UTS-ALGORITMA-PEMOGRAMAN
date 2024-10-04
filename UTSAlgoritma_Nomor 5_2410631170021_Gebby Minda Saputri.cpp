#include <iostream>
using namespace std;

int main(){
float beratBadan, tinggiBadanM, tinggiBadanCm, IMT;

cout << "Masukkan Berat Badan (kg): ";
cin >> beratBadan;
cout << "Masukkan Tinggi (cm): ";
cin >> tinggiBadanCm;

//Ubah meter ke centimeter
tinggiBadanM = tinggiBadanCm / 100;

IMT = beratBadan / (tinggiBadanCm * tinggiBadanCm);

    cout << "Nilai IMT Anda: " << IMT << endl;
    if (IMT < 18.4){
    cout << "Kriteria: Berat Badan Kurang" << endl;
    } else if (IMT >=18.5 && IMT <=24.9){
    cout << "Kriteria: Berat Badan Ideal" << endl;
    } else if (IMT >=25 && IMT <=29.9){
    cout << "Kriteria: Berat Badan Lebih" << endl;
    } else if (IMT >=30 && IMT <=39.9){
    cout << "Kriteria: Gemuk" << endl;
    } else if (IMT >= 40){
    cout << "Kriteria: Sangat Gemuk" << endl;
}
return 0;
}
