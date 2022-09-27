#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //soal 1
    /*
    int a;
    cout << "Masukan Angka: ";
    cin >> a;

    if (a > 25 && a < 50 && a % 2 == 0){
        cout << " bilangan sesuai" << endl;
    }
    else {
        cout << "bilangan tidak sesuai" << endl;
    }
    */

    //soal 2
    /*
    int a;
    cout << "Masukan Angka: ";
    cin >> a;

    if (a > 13 || a < 5 && a % 2 == 1){
        cout << " bilangan ganjil" << endl;
    }
    else {
        cout << "maaf tidak bisa terbaca" << endl;
    }
    */

    //soal 3
    /*
    int a;
    cout << "Masukan Angka: ";
    cin >> a;

    if (a > 25 && a < 50 || a > 3 && a < 15 && a % 2 == 1){
        cout << " bilangan ganjil" << endl;
    }
    else {
        cout << "maaf tidak bisa terbaca" << endl;
    }
    */

    //soal 4
    int jurusan;
    cout << "==Jurusan==\n1. Teknik Informatika\n2. Sistem Informasi\n3. DKV"<< endl;
    cout << "Masukan Jurusan anda: ";
    cin >> jurusan;

    if (jurusan == 1){
        cout << "Jurusan anda adalah Teknik Informatika" << endl;
        }

    else if (jurusan == 2 || 3) {
        cout << "Jurusan tidak diketahui" << endl;
    }


    else if (jurusan > 3 ) {
        cout << "Jurusan tidak diketahui" << endl;
    }

return 0;
}
