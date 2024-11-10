#include <bits/stdc++.h>

using namespace std;









int main() {
    Kosan* kepala = nullptr;
    int pilih, harga, posisi;
    string nama;

    do {
        std::cout << setw (31) << setfill ('=') << "=" << endl;
        std::cout << "|" <<  setw (15) << setfill (' ') << "Menu" << right << setw (15) << setfill (' ') << "|" << endl;
        std::cout << setw (31) << setfill ('=') << "=" << endl;
        std::cout << "|" <<  setw (20) << setfill (' ') << "1. Input Data Kos" << right << setw (10) << setfill (' ') << "|" << endl;
        std::cout << "|" <<  setw (20) << setfill (' ') << "2. Lihat Data Kos" << right << setw (10) << setfill (' ') << "|" << endl;
        std::cout << "|" <<  setw (20) << setfill (' ') << "3. Hapus Data Kos" << right << setw (10) << setfill (' ') << "|" << endl;
        std::cout << "|" <<  setw (12) << setfill (' ') << "4. Exit  " << right << setw (18) << setfill (' ') << "|" << endl;
        std::cout << setw (31) << setfill ('=') << "=" << endl;
        cout << "Pilih menu: ";
        cin >> pilih;
        system ("cls");
        switch (pilih) {
            case 1:
            std::cout << setw (31) << setfill ('=') << "=" << endl;
            std::cout << "|" <<  setw (17) << setfill (' ') << "1. Depan" << right << setw (13) << setfill (' ') << "|" << endl;
            std::cout << "|" <<  setw (18) << setfill (' ') << "2. Tengah" << right << setw (12) << setfill (' ') << "|" << endl;
            std::cout << "|" <<  setw (20) << setfill (' ') << "3. Belakang" << right << setw (10) << setfill (' ') << "|" << endl;
            std::cout << setw (31) << setfill ('=') << "=" << endl;
                cout << "Pilih sisip : ";
                cin >> posisi;
                cout << "Masukkan nama Kos: ";
                cin >> nama;
                cout << "Masukkan harga Kos: ";
                cin >> harga;
                if (posisi == 1) {
                    sisipdepan(kepala, nama, harga);
                } else if (posisi == 2) {
                    cout << "Masukkan nomor posisi penyisipan : ";
                    cin >> posisi;
                    sisipTengah(kepala, nama, harga, posisi);
                } else if (posisi == 3) {
                    sisipBelakang(kepala, nama, harga);
                } else {
                    cout << "pilihan tidak valid" << endl;
                }
                system ("pause");
                system ("cls");
                break;
                

            case 2:
                lihatData(kepala);
                  system ("pause");
                    system ("cls");
                break;

            case 3:
                cout << "Masukkan nama Kos yang ingin dihapus: ";
                cin >> nama;
                hapusKos(kepala, nama);
                  system ("pause");
                system ("cls");
                break;
            case 4:
            void bacammundur();
            break;


            case 5:
                cout << "Keluar dari program" << endl;
                break;

            default:
                cout << "Pilihan tidak valid. " << endl;
        }
    } while (pilih != 5);

    return 0;
}