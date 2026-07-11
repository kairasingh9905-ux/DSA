#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is LOWERCASE" << endl;
    }
    else
    {
        cout << ch << " is UPPERCASE" << endl;
    }
    return 0;
}