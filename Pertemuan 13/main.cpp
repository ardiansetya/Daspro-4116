#include <iostream>
using namespace std;

int main()
{
    int uang = 5000;
    int harga;
    int permen;

    cout << "Ardian memiliki uang sebesar RP" << uang << endl;
    cout << "Masukan harga permen yang ingin di beli (300,500,1000): ";
    cin >> harga;

    if (harga == 300)
    {
        for (int i = 1; i <= uang; i++)
        {
            cout << harga << endl;
            harga = harga + 300;
            i = harga;
        }
        permen = uang / 300;
        cout << "permen yang dibeli Ardian sebanyak: " << permen << endl;
    }
    else if (harga == 1000)
    {
        cout << "Ardian membeli 3 permen";
    }
    else if (harga == 500)
    {
        permen = uang / harga;
        cout << "Ardian membeli permen sebanyak " << permen << " permen";
    }
    else
    {
        cout << "Input Tidak Valid!";
    }
    return 0;
}
