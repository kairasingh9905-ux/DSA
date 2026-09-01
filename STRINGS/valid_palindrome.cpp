#include <iostream>
#include <string>
using namespace std;
bool isalphanum(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}
bool palindrome(string str)
{
    int st = 0, end = str.length() - 1;

    while (st <= end)
    {
        if (!isalnum(str[st]))
        {
            st++;
            continue;
        }
        if (!isalnum(str[end]))
        {
            end--;
            continue;
        }
        if (tolower(str[st]) != (tolower(str[end])))
        {
            return false;
        }
        st++, end--;
    }
    return true;
}
int main()
{
    string str = "Ac3?e3c&a";
    cout << palindrome(str) << endl;
}