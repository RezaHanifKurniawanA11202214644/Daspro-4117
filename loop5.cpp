#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Progam ini akan berhenti jika anda menginputkan angka -99\n"<<endl;
    while(true){
       cout<<"Masukan Nilai Anda ";
       cin>>x;
       if(x==-99){
          break;
       }
    } 
    cout<<"\nKeluar karena Break"<<endl;
    return 0;
}