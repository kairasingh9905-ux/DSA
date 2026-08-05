#include <iostream>
using namespace std;
void palindrome(int n)
{
    int og = n;
    int rev = 0;
    while (n > 0)
    {
        int last_dig = n % 10;
        rev = rev * 10 + last_dig;
        n = n / 10;
    }
    if (rev == og)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    palindrome(n);
}