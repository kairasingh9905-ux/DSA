#include <iostream>
using namespace std;
int binary(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        ans = ans + rem * pow;
        pow = pow * 10;
        n = n / 2;
    }
    return ans;
}
int main()
{
    double n, x;

    cout << " enter value of integer whose expansions needs to be calculated:";
    cin >> x;
    cout << "enter power: ";
    cin >> n;
    int bin;
    if (n < 0)
    {
        x = 1 / x;
        bin = binary(-n);
    }
    else
    {
        bin = binary(n);
    }
    double ans = 1, pow = x;
    while (bin > 0)
    {
        if (bin % 10 == 1)
        {
            ans = ans * pow;
            pow = pow * pow;
        }
        else
        {
            pow = pow * pow;
        }
        bin = bin / 10;
    }
    cout << ans << endl;
    return 0;
}