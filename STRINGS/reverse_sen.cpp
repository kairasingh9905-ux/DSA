#include <iostream>
#include <string>
using namespace std;
string reverse(string s)
{
    int n = s.length();
    string ans = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        ans = " " + word;
    }
    return s.substr(1);
}
int main()
{
    string s = "the pen";
    cout << reverse(s);
}