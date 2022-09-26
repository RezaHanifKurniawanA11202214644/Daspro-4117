#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   //cout << "Hello world!" << endl;
   //printf("Hello!");


/*
//Ini bahasa iostream
    int a;
    cout << "\nMasukan Angka: ";
    cin >> a;
    cout << "Angka Anda: " << a << endl;

//ini bahasa stdio.h
    printf("\nMasukan Angka Kedua: ");
    scanf("%d", &a);
    printf("Angka Kedua: %d", a);
    */

/*
    int a, b, c, hasil;
    //data Mhs, Matkul, asalKota;

    int x;
    int y;
    int z;

    a = 2;
    b = 4;
    c = 8;

    //cara 1
    cout << a + b + c <<endl;

   //cara 2
    hasil=a + b + c;
    cout << "Hasil: " << hasil << endl;
*/


//Luas Lingkaran

    /*
    //cara 1 memakai phi 3.14

    float phi, r1, r2, hasil;
    phi= 3.14;
    r1= 10;
    r2= 10;
    hasil= phi * r1 * r2;

    cout << "\ta. Masukan phi: ";
    cin >> phi;
    cout << "\tb. Masukan r1: ";
    cin >> r1;
    cout << "\tc. Masukan r2: ";
    cin >> r2;
    cout << "\td. Masukan rumus: phi * r1 * r2" << endl;
    cout << "\t --> Hasil perhitungan: " << phi * r1 * r2 << endl;
    cout << endl;
    */

    //cara 2 memakai phi 22/7

    float phi, r1, r2, hasil;
    phi= 22;
    r1= 14;
    r2= 14;
    hasil= (phi * r1 * r2);

    cout << "\ta. Masukan phi: ";
    cin >> phi;
    cout << "\tb. Masukan r1: ";
    cin >> r1;
    cout << "\tc. Masukan r2: ";
    cin >> r2;
    cout << "\td. Masukan rumus: (phi * r1 * r2) / 7" << endl;
    cout << "\t --> Hasil perhitungan: " << (phi * r1 * r2) / 7 << endl;
    cout << endl;

    return 0;
}
