#include <iostream>
using namespace std;

int main (){
int angka;

cout << "Masukkan Angka: ";
cin >> angka;

    cout << "Bilangan Ganjil: " << endl;
    for (int i=1; i<=angka; i+=2){
    cout << i << endl;
    }
    cout << endl;
    cout << "Bilangan Genap: " << endl;
    for (int j=2; j<=angka; j+=2){
    cout << j << endl;
    }
return 0;
}
