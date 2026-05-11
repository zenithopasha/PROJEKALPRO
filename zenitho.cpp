#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct siswa {
    string nama;
    int umur;
    int kelas;
};


int main (){
    siswa zunit[324];
    int jmlSiswa = 0;
    int pilihan;


    do
    {
        cout << "==============================" << endl;
        cout << "       TABEL DATA SISWA       " << endl;
        cout << "==============================" << endl;
        cout << "1. Tambah Data Siswa" << endl;
        cout << "2. Tampilkan Data Siswa" << endl;
        cout << "3. Cari Data Siswa" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: "; cin >> pilihan;

        system("cls");

        if (pilihan == 1) {
            
            cout << "Masukkan Nama Siswa: "; cin.ignore(); getline(cin, zunit[jmlSiswa].nama);
            cout << "Masukkan Umur Siswa: "; cin >> zunit[jmlSiswa].umur;
            cout << "Masukkan Kelas Siswa: "; cin >> zunit[jmlSiswa].kelas;

            jmlSiswa++;
        }
        

        else {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

        

    } while (pilihan == 1 || pilihan == 2 || pilihan == 3);





}