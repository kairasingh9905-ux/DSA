#include <iostream>
using namespace std;
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int last_dig = n % 10;
        rev = rev * 10 + last_dig;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "REVERSED NUMBER : " << reverse(n) << endl;
}