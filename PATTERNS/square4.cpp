#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "enter number of rows:";
    cin >> n;
    int num = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}
