#include <iostream>
using namespace std;

int main() {
    int jumlahStudio;
    char ulang;

    do {
        cout << "=====================================\n";
        cout << " SISTEM MANAJEMEN DENAH BIOSKOP\n";
        cout << " Kelompok 10 (Shift 2)\n";
        cout << "=====================================\n";

        do {
            cout << "Masukkan jumlah studio (1-5): ";
            cin >> jumlahStudio;

            if (jumlahStudio < 1 || jumlahStudio > 5) {
                cout << "Jumlah studio tidak valid!\n";
            }

        } while (jumlahStudio < 1 || jumlahStudio > 5);

        for (int studio = 1; studio <= jumlahStudio; studio++) {

            int baris, kursi;
            cout << "\n=== Studio " << studio << " ===\n";

            cout << "Masukkan jumlah baris kursi : ";
            cin >> baris;

            cout << "Masukkan jumlah kursi per baris : ";
            cin >> kursi;

            cout << "\nDenah Kursi Studio " << studio << ":\n";

            for (int i = 1; i <= baris; i++) {
                for (int j = 1; j <= kursi; j++) {
                    cout << "[X] ";
                }
                cout << endl;
            }

            cout << "Total kapasitas kursi = "
                 << baris * kursi << " kursi\n";
        }

        cout << "\nApakah ingin memproses sesi baru? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nProgram selesai. Terima kasih.\n";

    return 0;
}
