#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int x;
    while (x != 9999)
    {
        cout << "Input Bil: ";
        cin >> x;
        if (x!= 9999)
        {
            cout << x << endl;
            i = i + 1;
        }
        
    }
    cout << "Jumlah Angka: " << i << endl;




    return 0;
}
