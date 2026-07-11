#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int count = 0;
    cout << "Enter number n:";
    cin >> n;
    if (n <= 1)
    {
        cout << n << " is NOT PRIME " << endl;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << n << " is PRIME" << endl;
    }
    else
    {
        cout << n << " is NOT PRIME" << endl;
    }
    return 0;
}