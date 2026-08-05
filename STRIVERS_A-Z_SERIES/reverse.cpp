#include <iostream>
using namespace std;
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int last_dig = n % 10;     // last digit
        rev = rev * 10 + last_dig; // making the number
        n = n / 10;                // removing the last digit
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