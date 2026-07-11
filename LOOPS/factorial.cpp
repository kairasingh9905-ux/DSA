#include <iostream>
using namespace std;
int main()
{
    int n, i, fac = 1;
    cout << "enter n :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    cout << "FACTORIAL IS:" << fac << endl;
    return 0;
}