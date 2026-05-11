#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct siswa {
    string nama;
    int umur;
    int kelas;
};

void rekursif (int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    rekurisif(n - 1);
}

int main (){
    siswa zunit[324];
    int pilihan;


    do
    {
        cout << "TABEL DATA SISWA" << endl;
        cout << "1. Tambah Data Siswa" << endl;
        cout << "2. Tampilkan Data Siswa" << endl;
        cout << "3. Keluar" << endl;







    } while (pilihan == 1 || pilihan == 2 || pilihan == 3);





}