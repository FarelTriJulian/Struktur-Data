#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "input: ";
    cin >> n;

    cout << "output: " << endl;
     
    string spasi = " "; 

    for (int i = n; i >= 0; i--) {
        cout << spasi;
        for (int j = i; j >= 1; j--){
            cout << j << " ";
        }
        cout << "*";
        for (int j = 1; j <= i; j++){
            cout << " " << j;
        }
        cout << endl;
        spasi = spasi + "  "; 
    }
    return 0;
}