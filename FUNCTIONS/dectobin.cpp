#include <iostream>
using namespace std;
int DectoBin(int n)
{
    int pow = 1;
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 2;
        sum += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter decimal number:";
    cin >> n;
    cout << n << "=" << DectoBin(n) << endl;
}