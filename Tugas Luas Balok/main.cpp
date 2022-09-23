#include <iostream>

using namespace std;

int main()
{

    float p, l, t, L;

    cout << "masukan nilai panjang: ";
    cin >> p;
    cout << "masukan nilai lebar: ";
    cin >> l;
    cout << "masukan nilai tinggi: ";
    cin >> t;
    L = 2 * (p * l + l * t + p * t);
    cout << "luas permukaan balok: " << L << endl;

    return 0;
}
