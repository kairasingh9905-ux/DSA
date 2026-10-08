#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {-2, 1, 0, 0, 1, 2, -1, -1, -2, 2};
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;
        int sum = arr[i] + arr[j] + arr[k];
        while (j < k)
        {
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                if (j < k && arr[j] == arr[j - 1])
                {
                    j++;
                }
                if (j < k && arr[k] == arr[k + 1])
                {
                    k--;
                }
            }
        }
    }
    for (auto &trip : ans)
    {
        for (int x : trip)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}