#include <iostream> 

using namespace std;

int main()
{
    int x;
    cout << "Input: ";
    cin >> x;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            cout << i << " x " << x << " = " << i * x << endl;
        }
    }
    



    return 0;
}
