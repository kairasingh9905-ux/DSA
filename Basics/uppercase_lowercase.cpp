#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is LOWERCASE";
    }
    else
    {
        cout << ch << " is UPPERCASE";
    }
    return 0;
}