#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << " is EVEN " << endl;
    }
    else
    {
        cout << n << " is ODD" << endl;
    }
    return 0;
}
