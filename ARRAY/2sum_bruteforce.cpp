#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {2, 4, 6, 8, 11};
    int tar = 14;
    sort(arr.begin(), arr.end());
    int st = 0, end = arr.size() - 1;
    while (st < end)
    {
        int sum = arr[st] + arr[end];
        if (sum == tar)
        {
            cout << "yes" << endl;
            return 0;
        }
        else if (sum < tar)
        {
            st++;
        }
        else
        {
            end--;
        }
    }
    cout << "no" << endl;
    return 0;
}