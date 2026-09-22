#include <iostream>
using namespace std;

int main(){
    string satuan[10] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

    int n;
    cout << "masukan angka(0-100): ";
    cin >> n; 

    string hasil;
    if (n == 10){
        hasil = "sepuluh";
    } else if (n == 11){
        hasil = "sebelas";
    } else if (n == 100){
        hasil = "seratus";
    } else if (n < 10){
        hasil = satuan[n];
    } else if (n < 20){
        hasil = satuan[n - 10] + "belas";
    } else{
        int puluh = n/10;
        int sisa = n%10;
        hasil = satuan[puluh] + " puluh";
        if (sisa != 0){
            hasil = hasil + " " + satuan[sisa];
        }
    }
    cout << n << " : " << hasil <<  endl;
    return 0;
}