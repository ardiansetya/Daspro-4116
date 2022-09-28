/*  Nama    : Ardian Setya Pradana
    NIM     : A11.2022.14596
    Kelas   : 4116*/



#include <iostream>

using namespace std;

int main()
{
    float temp;
    cin>> temp;

    if (temp <= 0){
        cout << "ice";
    }
    else if (temp > 100){
        cout << "gas";
    }
    else{
        cout << "liquid";
    }
    return 0;
}
