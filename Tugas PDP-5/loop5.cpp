#include <iostream> 

using namespace std;

int main()
{
    int x;
    while (true)
    {
        cout << "MAsukan Nilai Anda: ";
        cin >> x;
        if (x == -99)
        {
            cout << "Keluar Karena Break" << endl;
            break;
            
        }
        
    }
    
    return 0;
}
