#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter number of rows:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}