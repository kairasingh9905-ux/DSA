#include <iostream>
using namespace std;
int count_dig(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int dig = 0;
    while (n != 0)
    {
        n = n / 10; // removing last digit
        dig += 1;
    }
    return dig;
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    cout << count_dig(n) << endl;
}