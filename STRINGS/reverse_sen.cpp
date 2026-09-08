#include <iostream>
#include <string>
using namespace std;
string reverse(string s)
{
    int n = s.length();
    string ans = "";
    reverse(s.begin(), s.end()); // reversing whole sentence
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ') // travesring through word
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end()); // reversing only word to get reversed sentence
        ans += " " + word;
    }
    return ans.substr(1); // removes fist whitespace from sentence
}
int main()
{
    string s = "the pen";
    cout << "Reversed string :";
    cout << reverse(s) << endl;
}