#include <iostream>

using namespace std;

int main()
{
    int jumlah = 0;
    int i [20];
    int j;
    float ratarata;
    for (int i = 1; i <= 20; i++)
    {
        cout << i << endl;
        jumlah += i;
    }
    j = sizeof(i)/sizeof(i[0]);
    ratarata = jumlah / j;
    cout << endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "rata-rata: " << ratarata << endl;
    return 0;
}
