#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "kaira";
    string rev = str;                // assinging the value to reverse
    reverse(str.begin(), str.end()); // reversing the string
    if (str == rev)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome";
    }
}