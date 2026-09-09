#include <iostream>
#include <string>
#include <vector>
using namespace std;
int compression(vector<char> &chars)
{
    int n = chars.size();
    int indx = 0;
    int i = 0;

    while (i < n)
    {
        char ch = chars[i];
        int count = 0;
        while (i < n && chars[i] == ch)
        {
            count++;
            i++;
        }
        chars[indx++] = ch;
        if (count > 1)
        {
            for (char dig : to_string(count))
                chars[indx++] = dig;
        }
    }
    chars.resize(indx);
    return indx;
}
int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compression(chars) << endl;
}