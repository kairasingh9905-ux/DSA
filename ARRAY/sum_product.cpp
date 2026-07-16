#include <iostream>
using namespace std;
int sum(vector<int> &arr, int sz)
{
    int sum = 0;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int product(vector<int> &arr, int sz)
{
    int product = 1;
    for (int i = 0; i < sz; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int sz, i;
    cout << " enter size of array :";
    cin >> sz;
    vector<int> arr(sz);
    cout << "enter numbers of array:";

    {
        for (int i = 0; i < sz; i++)
        {
            cin >> arr[i];
        }
    }
    cout << "SUM= " << sum(arr, sz) << endl;
    cout << "PRODUCT= " << product(arr, sz) << endl;
}