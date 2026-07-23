#include <iostream>
using namespace std;
int max_profit(int price[], int sz)
{
    int mp = 0, bestbuy = price[0];
    for (int i = 1; i < sz; i++)
    {
        if (price[i] > bestbuy)
        {
            mp = max(mp, price[i] - bestbuy);
        }
        bestbuy = min(bestbuy, price[i]);
    }
    cout << "BEST BUY: " << bestbuy;
    cout << endl;
    return mp;
}
int main()
{
    int sz;
    cout << "enter size of the array: ";
    cin >> sz;
    int price[100];
    cout << "enter the price array :";
    for (int i = 0; i < sz; i++)
    {
        cin >> price[i];
    }

    int mp = max_profit(price, sz);
    cout << "MAXIMUM PROFIT: " << mp << endl;
}