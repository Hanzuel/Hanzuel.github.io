#include <iostream>
using namespace std;

int main() {
    int nilai[3][3] = {
        {95, 90, 68}, // Baris ke-0: Nilai mahasiswa 1
        {92, 78, 85}, // Baris ke-1: Nilai mahasiswa 2
        {86, 70, 92} // Baris ke-2: Nilai mahasiswa 3
    };

    cout << "=== Menampilkan Isi Array 2D ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Nilai mahasiswa ke-" << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n=== Menghitung Rata-rata ===" << endl;
    float totalKeseluruhan = 0; // Tambahan: Variabel untuk total nilai keseluruhan

    for (int i = 0; i < 3; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total = total + nilai[i][j];
        }
        float rataRata = (float)total / 3.0;
        cout << "Rata-rata Mahasiswa ke-" << i + 1 << ": " << rataRata << endl;
        totalKeseluruhan += total; // Tambahan: Menambahkan total mahasiswa ke totalKeseluruhan
    }

    // Tambahan: Menghitung dan menampilkan rata-rata kelas
    float rataRataKelas = totalKeseluruhan / (3.0 * 3.0);
    cout << "\nRata-rata Kelas: " << rataRataKelas << endl;

    return 0;
}