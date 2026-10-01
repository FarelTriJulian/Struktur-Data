#include <iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    int nilai1D[N];
    int total = 0;

    for(int i = 0; i < N; i++){
        cin >> nilai1D[i];
        total += nilai1D[i];
    }
    int rataRata = total / N;

    int diatasRataRata = 0;
    for(int i = 0; i < N; i++){
        if(nilai1D[i] > rataRata){
            diatasRataRata++;
        }
    }
    cout << "Rata-rata: " << rataRata << endl;
    cout << "Diatas rata-rata: " << diatasRataRata << endl;
    return 0;
}