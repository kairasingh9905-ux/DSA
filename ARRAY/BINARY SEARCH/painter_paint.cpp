#include <iostream>
#include <vector>
using namespace std;
bool possible(vector<int> arr, int n, int m, int mid)
{
    int time = 0, painter = 1;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= mid) // for 1st painter
        {
            time += arr[i];
        }
        else // if time exceeds
        {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m; // painter should not exceed the max painters
}
int paint(vector<int> arr, int n, int m)
{
    int sum = 0, max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        max_val = max(arr[i], max_val);
    }
    int st = max_val, end = sum, ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (possible(arr, n, m, mid)) // left search
        {
            ans = mid;
            end = mid - 1;
        }
        else // right search
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {40, 30, 20, 10};
    int m = 2, n = 4;
    cout << paint(arr, n, m) << endl;
}
