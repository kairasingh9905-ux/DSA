#include <iostream>
using namespace std;
int odd(int n)
{
    int dig = 0;
    while (n != 0)
    {
        int last_dig = n % 10; // last digit kya hain?
        if (last_dig % 2 != 0)
        {
            dig += 1;
        }
        n = n / 10; // last digit hatadena
    }
    return dig;
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    cout << odd(n) << endl;
}