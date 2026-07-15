#include <iostream>
using namespace std;
int BintoDec(int n)
{
    int pow = 1;
    int sum = 0;
    while (n > 0)
    {
        int lastdig = n % 10;
        sum += lastdig * pow;
        n = n / 10;
        pow *= 2;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter binary number:";
    cin >> n;
    cout << n << " = " << BintoDec(n) << endl;
}
