#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    float avg;
    for (int i = 1; i <=20; i++) {
        cout<<i<<endl;
        sum=sum+i;
        avg=(float)sum/i;
    }
    cout << "Jumlah = " << sum << endl;
    cout << "Rata-Rata = " << avg << endl;
    return 0;
}
