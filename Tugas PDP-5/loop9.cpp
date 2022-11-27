#include <iostream> 

using namespace std;

int main()
{
    int i = 0;
    int sum = 0;
    int x;

    while (x != 9999)
    {
        cout << "Input Bil: ";
        cin >> x;
        if (x != 9999)
        {
            cout << x << endl;
            i = i + 1;
        }

        sum = sum + x;
    }
    sum -= 9999;
    cout << "Jumlah Cacah Angka: " << i << endl;
    cout << "Jumlah Angka: " << sum << endl;

    return 0;
}
