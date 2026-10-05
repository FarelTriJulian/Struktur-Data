#include <iostream>
using namespace std;

void tampil(int a[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void tukarPosisi(int a[3][3], int b[3][3], int baris, int kolom) {
    int temp = a[baris][kolom];
    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int *p1 = &A[0][0];
    int *p2 = &B[0][0];

    cout << "A:" << endl; tampil(A);
    cout << "B:" << endl; tampil(B);

    tukarPosisi(A, B, 1, 1);
    cout << "\nSetelah tukar posisi [1][1]" << endl;
    cout << "A:" << endl; tampil(A);
    cout << "B:" << endl; tampil(B);

    tukarPointer(p1, p2);
    cout << "\nSetelah tukar lewat pointer" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;

    return 0;
}