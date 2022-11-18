#include <iostream>

using namespace std;

int main()
{
    while(true){
    cout << "=======Daftar menu makanan=======" << endl;
    cout << "1. Nasi Kerikil" << endl;
    cout << "2. Rica Rica Bekicot" << endl;
    cout << "3. Pepes Brotowali" << endl;
    cout << "4. Kepiting Presto" << endl;

    int x;
    cout << "Masukan Kode Pesanan Anda: ";
    cin >> x;
    cout << endl;
    switch(x){
    case 1:
        cout << "Anda Mememesan Nasi Kerikil" << endl;
        break;
    case 2:
        cout << "Anda Memesan Rica Rica Bekicot" << endl;
        break;
    case 3:
        cout << "Anda Memesan Pepes Brotowali" << endl;
        break;
    case 4:
        cout << "Anda Memesan Kepiting Presto" << endl;
        break;
    default:
        cout << "Input Tidak Valid" << endl;
        }
    }
    return 0;
}

