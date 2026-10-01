#include <iostream>
using namespace std;

int hitungkarakter(string kata, char cari){
    int jumlah = 0;
    for(int i = 0; i < kata.length(); i++){
        if(kata[i] == cari){
            jumlah++;
        }
    }
    return jumlah;
}

    int main(){
        string kata;
        char cari;

        cin >> kata; 
        cin >> cari;

        int hasil = hitungkarakter(kata, cari);
        cout << hasil << endl;
        return 0;
}
