#include <iostream>
using namespace std;
bool palindrome(int n)
{
    int og = n;
    int rev = 0;
    while (n > 0)
    {
        int last_dig = n % 10;
        rev = rev * 10 + last_dig;
        n = n / 10;
    }
    return rev == og;
}
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    cout << palindrome(n) << endl;
}