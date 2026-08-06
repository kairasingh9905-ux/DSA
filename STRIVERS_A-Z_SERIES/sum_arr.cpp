#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;

    vector<int> arr(n);
    cout << "enter values of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "SUM: " << sum(arr, n) << endl;
}
