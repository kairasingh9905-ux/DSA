#include <iostream>
#include <string>
using namespace std;
bool isalphanum(char ch)
{
    if (isalnum(ch)) // checking for alphanumeric character

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
        if (!isalnum(str[st])) // if st is spcl character
        {
            st++;
            continue;
        }
        if (!isalnum(str[end])) // if end is spcl character
        {
            end--;
            continue;
        }
        if (tolower(str[st]) != (tolower(str[end]))) // checking for palindrome
        {
            return false;
        }
        st++, end--; // basic iteration of moving forward
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