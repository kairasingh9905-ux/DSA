#include <iostream>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            i++;
        }
        else
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    if (prime(n) == true)
    {
        cout << n << " is a Prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }
}