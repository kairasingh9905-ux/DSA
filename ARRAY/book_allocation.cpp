#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int> arr, int n, int m, int mid)
{
    int st = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (pages + arr[i] <= mid) // pages should be less than maximum allocation of pages
        {
            pages += arr[i];
        }
        else // if pages exceeds the limit
        {
            st++;
            pages = arr[i];
        }
    }
    if (st > m)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;
    int start = 0, end = 0;
    for (int i = 0; i < n; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }
    int ans = end;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (check(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1; // need smaller mid
        }
        else
        {
            start = mid + 1; // need bigger mid
        }
    }
    cout << ans << endl;
    return 0;
}