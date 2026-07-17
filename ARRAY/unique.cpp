#include <iostream>
using namespace std;
int unique(int arr[], int sz)
{
    int ans = 0;
    for (int i = 0; i < sz; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}
int main()
{
    int sz;
    cout << "enter size of the array:";
    cin >> sz;
    int arr[1000];

    cout << "enter numbers of array:";
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    cout << "UNIQUE VALUE IN ARRAY IS= " << unique(arr, sz) << endl;
}