#include <iostream>
#include <string>
using namespace std;
int print()
{
    string str = "kaira";
    reverse(str.begin(), str.end()); // function for reversing any string
    cout << str << endl;
    return 0;
}
int main()
{
    string str = "kaira";
    int st = 0, end = str.length() - 1; // normal way of reversing string
    while (st <= end)
    {
        swap(str[st], str[end]);
        st++;
        end--;
    }
    cout << str << endl;
    print();
    return 0;
}
