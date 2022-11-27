#include <iostream>

using namespace std;

int main()
{
    for (int i = 100; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << "nilai genap adalah: " << i << endl;
    }   
    return 0;
}
