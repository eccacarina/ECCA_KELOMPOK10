#include <iostream>
using namespace std;

int jumlahLulus10(int nilai[]) {
    int lulus = 0;
    for (int i = 0; i < 10; i++) {
        if (nilai[i] >= 75) {
            lulus++;
        }
    }
    return lulus;
}
int jumlahMahasiswa10() {
    return 10;
}

class NilaiMahasiswa10 {
public:
    void cek10Mahasiswa() {

        cout << "Jumlah mahasiswa = " << jumlahMahasiswa10() << "\n" << endl;
        int nilai[10] = {80, 65, 90, 70, 55, 60, 85, 95, 100, 75};

        for (int i = 0; i < 10; i++) {
            cout << "Nilai mahasiswa ke-" << i + 1
                 << " = " << nilai[i] << " : ";

            if (nilai[i] >= 75) {
                cout << "Lulus" << endl;
            } else {
                cout << "Tidak Lulus" << endl;
            }
        }

        cout << "\nJumlah mahasiswa yang lulus = " << jumlahLulus10(nilai) << endl;
    }
};

int main() {
    cout << "=======================================" << endl;
    cout << "=        KELOMPOK 10 (SHIFT 2)        =" << endl;
    cout << "=======================================\n" << endl;

    NilaiMahasiswa10 kelompok10;
    kelompok10.cek10Mahasiswa();

    return 0;
}
