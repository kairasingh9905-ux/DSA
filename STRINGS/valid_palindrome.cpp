#include <iostream>
#include <string>
using namespace std;
bool isalphanum(char ch)
{
    if (isalnum(ch))

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
    if (palindrome(str) == 1)
    {
        cout << "VALID PALINDROME" << endl;
    }
    else
    {
        cout << "NOT VALID PALINDROME" << endl;
    }
}