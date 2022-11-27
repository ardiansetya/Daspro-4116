#include <iostream>
#include <iomanip>

using namespace std;

int main()

{

    cout << "-------------------------------------" << endl;
    cout << "|    Celcius     |     Farenheit    |" << endl;
    cout << "-------------------------------------" << endl;
    for (float c = 0; c < 101; c++)
    {
        float f;
        f = c * 9;
        f = f / 5 + 32;

        cout << "        " << c << "          " << "    " << f << endl;
    }

    return 0;
}
