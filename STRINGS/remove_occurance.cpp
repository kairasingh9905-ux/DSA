#include <iostream>
#include <string>
using namespace std;
string occurance(string str, string part)
{
    while (str.length() > 0 && str.find(part) <= str.length()) // used str.find(part) to find part position
    {
        str.erase(str.find(part), part.length()); // str.erase(start,end) to erase that part
    }
    return str;
}
int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    cout << occurance(str, part) << endl;
}