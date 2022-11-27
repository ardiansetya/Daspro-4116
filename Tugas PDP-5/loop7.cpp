#include <iostream> 

using namespace std;

int main()
{
    int sum = 0;
    int x;

    while (x != 9999)
    {
        cout << "Input Bil: ";
        cin >> x;
        if (x != 9999)
        {
            cout << x << endl;
        }
        
        sum = sum + x;
        
    }
    sum -= 9999;
    cout << "Jumlah Angka: " << sum << endl;


    return 0;
}
