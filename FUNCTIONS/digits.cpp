#include <iostream>
using namespace std;
int sum_digit(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int dig = n % 10;
        sum += dig;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "SUM OF DIGITS =" << sum_digit(n) << endl;
}