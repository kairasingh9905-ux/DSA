#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter number of rows(n):";
    cin >> n;
    char ch = 'A';
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= n - i + 1; j++)
        {

            cout << ch;
        }
        ch += 1;

        cout << endl;
    }
    return 0;
}