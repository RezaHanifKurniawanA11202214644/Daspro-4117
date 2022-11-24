#include<iostream>
using namespace std;

int main()
{
  int i=100;
  while(i>=1){
    if(i%2==1) {
       i--;
       continue;     
    }
     cout<<"Nilai genap adalah "<<i<<endl;
     i--;
  }     
    return 0;
}