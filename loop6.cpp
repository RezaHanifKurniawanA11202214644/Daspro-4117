#include <iostream>

using namespace std;

int main()
{
    int i, b, k;   
    do{   
        cout << "Masukkan Nilai Anda : ";
        cin >> i;
        if (i == -99) {
            break;
        }
        if (k > i) {
            k=i;
        }
        if (b < i) {
            b=i;
        }
    }while(true);

    cout << "\n""Max = " << b << endl;
    cout << "Min = " << k << endl;
    return 0;
}
