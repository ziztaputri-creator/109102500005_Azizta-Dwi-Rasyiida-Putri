#include <iostream>
using namespace std;

// Menampilkan isi array 2D 3x3
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// Menukar isi dua array 2D pada posisi (baris, kolom) tertentu
void tukarArray(int a[3][3], int b[3][3], int baris, int kolom) {
    int temp = a[baris][kolom];
    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = temp;
}

// Menukar isi variabel yang ditunjuk oleh dua pointer
void tukarPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int x = 10, y = 20;
    int *p1 = &x;   // 2 buah pointer integer
    int *p2 = &y;

    cout << "Array A:\n"; tampilArray(A);
    cout << "\nArray B:\n"; tampilArray(B);

    int baris, kolom;
    cout << "\nMasukkan posisi yang ditukar (baris kolom, 0-2): ";
    cin >> baris >> kolom;

    if (baris >= 0 && baris < 3 && kolom >= 0 && kolom < 3) {
        tukarArray(A, B, baris, kolom);
        cout << "\nSetelah ditukar pada posisi [" << baris << "][" << kolom << "]\n";
        cout << "Array A:\n"; tampilArray(A);
        cout << "\nArray B:\n"; tampilArray(B);
    } else {
        cout << "Posisi tidak valid!\n";
    }

    cout << "\nSebelum tukar pointer: x = " << *p1 << ", y = " << *p2 << endl;
    tukarPointer(p1, p2);
    cout << "Sesudah tukar pointer: x = " << *p1 << ", y = " << *p2 << endl;

    return 0;
}