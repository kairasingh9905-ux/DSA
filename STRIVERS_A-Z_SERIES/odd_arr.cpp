#include <iostream>
#include <vector>
using namespace std;
int odd(vector<int> arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter numbers of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << odd(arr, n) << endl;
}