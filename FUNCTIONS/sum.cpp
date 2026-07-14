#include <iostream>
using namespace std;

int printsum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        }
    return sum;
}
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    int a = printsum(n);
    cout << "SUM=" << a << endl;
}