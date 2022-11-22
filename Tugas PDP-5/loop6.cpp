#include <iostream>

using namespace std;

int main()
{
    int x, min, max;
    for (int i = 1; i < 99999; i++)
    {
        cin >> x;
        if (x == -99)
        {
            min != -99;
            break;
        }
        if (i == 1)
        {
            min = x;
            max = x;
        }
        else if (min > x)
        {
            min = x;
        }
        else if (max < x)
        {
            max = x;
        }
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    return 0;
}
