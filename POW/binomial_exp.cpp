#include <iostream>
using namespace std;
int binary(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        ans += rem * pow;
        pow *= 10;
        n = n / 2;
    }
    return ans;
}
int main()
{
    int n = 5, x = 3;
    int b = binary(n); // 5=101
    cout << b << endl;
    int ans = 1;
    int pow = x;
    while (b > 0)
    {
        if (b % 10 == 1) // binary number has 1 // to find the last digit of a number
        {
            ans = x * pow;
            pow = pow * pow;
        }
        else // binary number has 0
        {
            pow = pow * pow;
        }
        b = b / 10; // to shift the digit backward
    }
    cout << ans << endl;

    return 0;
}