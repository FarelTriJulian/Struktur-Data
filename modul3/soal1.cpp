#include <iostream>
using namespace std;

struct mahasiswa{
    string nama, nim;
    float uts, uas, tugas, nilaiAkhir;
};

float hitungnilaiakhir(float uts, float uas, float tugas){
    return (uts * 0.3) + (uas * 0.4) + (tugas * 0.3);
};

int main(){
    mahasiswa mhs[10];
    int n;
    cout << "jumlah mahasiswa: ";
    cin >> n;

    for(int i = 0; i <n; i++){
        cout << "nama, nim, uts, uas, tugas: ";
        cin >> mhs[i].nama >> mhs[i].nim >> mhs[i].uts >> mhs[i].uas >> mhs[i].tugas;
        mhs[i].nilaiAkhir = hitungnilaiakhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }
    for(int i = 0; i < n; i++){
        cout << mhs[i].nama << " | " << mhs[i].nim << " | Nilai akhir: " << mhs[i].nilaiAkhir << endl;
    }
    return 0;
}